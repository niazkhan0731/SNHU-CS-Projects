#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

// Course Structure
struct Course {
    string courseNumber;
    string name;
    vector<string> prerequisites;
};

// Binary Search Tree Node
struct TreeNode {
    Course data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(Course course) : data(course), left(nullptr), right(nullptr) {}
};

// Binary Search Tree Class
class BinarySearchTree {
private:
    TreeNode* root;

    // Helper function to insert into BST
    TreeNode* insert(TreeNode* node, Course course) {
        if (node == nullptr) return new TreeNode(course);
        if (course.courseNumber < node->data.courseNumber)
            node->left = insert(node->left, course);
        else
            node->right = insert(node->right, course);
        return node;
    }

    // Helper function for in-order traversal
    void inOrderPrint(TreeNode* node) {
        if (node == nullptr) return;
        inOrderPrint(node->left);
        cout << node->data.courseNumber << ", " << node->data.name << endl;
        inOrderPrint(node->right);
    }

    // Helper function to search for a course
    TreeNode* search(TreeNode* node, const string& courseNumber) {
        if (node == nullptr || node->data.courseNumber == courseNumber) return node;
        if (courseNumber < node->data.courseNumber)
            return search(node->left, courseNumber);
        return search(node->right, courseNumber);
    }

public:
    BinarySearchTree() : root(nullptr) {}

    // Insert course into BST
    void insert(Course course) {
        root = insert(root, course);
    }

    // Print all courses in order
    void printAllCourses() {
        if (root == nullptr) {
            cout << "No courses available." << endl;
            return;
        }
        inOrderPrint(root);
    }

    // Print course details
    void printCourse(const string& courseNumber) {
        TreeNode* courseNode = search(root, courseNumber);
        if (courseNode == nullptr) {
            cout << "Course not found." << endl;
            return;
        }
        cout << courseNode->data.courseNumber << ", " << courseNode->data.name << endl;
        if (!courseNode->data.prerequisites.empty()) {
            cout << "Prerequisites: ";
            for (size_t i = 0; i < courseNode->data.prerequisites.size(); ++i) {
                cout << courseNode->data.prerequisites[i];
                if (i < courseNode->data.prerequisites.size() - 1) cout << ", ";
            }
            cout << endl;
        }
    }
};

// Load Courses from CSV
void loadCourses(const string& fileName, BinarySearchTree& bst) {
    ifstream file(fileName);
    if (!file) {
        cout << "Error: File not found." << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string token;
        Course course;
        vector<string> tokens;

        while (getline(ss, token, ',')) {
            tokens.push_back(token);
        }

        if (tokens.size() < 2) {
            cout << "Error: Invalid file format." << endl;
            return;
        }

        course.courseNumber = tokens[0];
        course.name = tokens[1];

        for (size_t i = 2; i < tokens.size(); ++i) {
            course.prerequisites.push_back(tokens[i]);
        }

        bst.insert(course);
    }
    cout << "Courses successfully loaded." << endl;
}

// Main Menu
void displayMenu() {
    cout << "\n1. Load Data Structure." << endl;
    cout << "2. Print Course List." << endl;
    cout << "3. Print Course." << endl;
    cout << "9. Exit" << endl;
    cout << "What would you like to do? ";
}

int main() {
    BinarySearchTree bst;
    string fileName;
    int choice;

    cout << "Welcome to the course planner." << endl;

    while (true) {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            cout << "Enter file name: ";
            cin >> fileName;
            loadCourses(fileName, bst);
        }
        else if (choice == 2) {
            bst.printAllCourses();
        }
        else if (choice == 3) {
            cout << "What course do you want to know about? ";
            string courseNumber;
            cin >> courseNumber;
            transform(courseNumber.begin(), courseNumber.end(), courseNumber.begin(), ::toupper);
            bst.printCourse(courseNumber);
        }
        else if (choice == 9) {
            cout << "Thank you for using the course planner!" << endl;
            break;
        }
        else {
            cout << choice << " is not a valid option." << endl;
        }
    }
    return 0;
}