# **Project Two: ABCU Course Planner**

## **Overview**
This project implements a **command-line course advising system** for the Computer Science department at ABCU. The program allows advisors to load course data from a `.csv` file, display an alphabetically sorted course list, and search for individual course details, including prerequisites. The system is implemented using a **Binary Search Tree (BST)** for efficient course storage and retrieval.

---

## **Features**
- ✅ **Loads course data from a `.csv` file**.
- ✅ **Displays an alphanumeric list of all courses**.
- ✅ **Searches for a course by course number and displays its title and prerequisites**.
- ✅ **Handles invalid user input and missing files gracefully**.
- ✅ **Implements industry-standard best practices in C++ coding**.

---

## **Technologies Used**
- 🖥 **C++**
- 🌳 **Binary Search Tree (BST)**
- 📂 **File Handling (CSV Parsing)**
- 🖥 **Command-line User Interface**
- 🛠 **GitHub for Version Control**

---

## **Project Setup**

### **1. Setting Up the Development Environment**
1. Open **Visual Studio 2019**.
2. Create a new **C++ Console Application** project named `ProjectTwo`.
3. Add a new file named **`ProjectTwo.cpp`** under **Source Files**.

### **2. Preparing the Course Data File**
- Create a file named **`courses.csv`** and place it in the same directory as `ProjectTwo.cpp`.
- Ensure that the file follows this format:

```csv
CSCI100,Introduction to Computer Science
CSCI101,Introduction to Programming in C++,CSCI100
CSCI200,Data Structures,CSCI101
MATH201,Discrete Mathematics
CSCI300,Introduction to Algorithms,CSCI200,MATH201
CSCI301,Advanced Programming in C++,CSCI101
CSCI350,Operating Systems,CSCI300
CSCI400,Large Software Development,CSCI301,CSCI350
```

### **3. Implementing the Data Structure**
- ✅ **Binary Search Tree (BST) was chosen for efficient course storage and retrieval.**
- ✅ Implemented a **TreeNode structure** to store courses with left and right pointers.
- ✅ Implemented **BST insertion, search, and in-order traversal**.

### **4. Developing the Program Logic**
- Implemented a **menu-driven system**:
  1. Load data from `courses.csv`.
  2. Print all courses in **sorted order**.
  3. Search for a course and display its **prerequisites**.
  4. Exit the program.

- **CSV Parsing Logic**:
  - Reads the file line by line.
  - Splits each line by commas to extract course details.
  - Stores courses in the BST.

### **5. Handling User Input**
- ✅ **Case-insensitive course number searches**.
- ✅ **Displays error messages for invalid inputs**.
- ✅ **Handles missing file errors gracefully**.

### **6. Testing and Debugging**
- ✅ **Validated input handling, file reading, and BST operations**.
- ✅ **Tested with different scenarios**:
  - Valid and invalid file names.
  - Searching for existing and non-existing courses.
  - Checking the sorted order of the printed list.

---

## How to Run the Program

1. **Download** `ProjectTwo.cpp` and `courses.csv`.
2. **Open `ProjectTwo.cpp` in Visual Studio 2019**.
3. **Place `courses.csv` in the same directory as `ProjectTwo.cpp`**.
4. **Run the program**:
   - Press `Ctrl + F5` or `F5` in Visual Studio.
5. **Follow the menu options**:
   ```plaintext
   Welcome to the course planner.
   1. Load Data Structure.
   2. Print Course List.
   3. Print Course.
   9. Exit
   What would you like to do?
   ```

