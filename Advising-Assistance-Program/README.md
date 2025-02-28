# **Project Two: ABCU Course Planner**  

## 📌 Overview
This project implements a **command-line course advising system** for the **Computer Science department at ABCU**. The program enables advisors to:  
✅ **Load** course data from a `.csv` file.  
✅ **Sort and display** courses in **alphanumeric order**.  
✅ **Search** for individual course details, including **prerequisites**.  

The system uses a **Binary Search Tree (BST)** for **efficient storage, retrieval, and sorting**, ensuring an optimized approach for handling large course datasets.

---

## 📂 Features
- ✅ Loads course data from a `.csv` file.  
- ✅ Displays an alphanumeric list of all courses (sorted order).  
- ✅ Searches for a course by course number and displays its title and prerequisites.  
- ✅ Handles errors such as invalid user input and missing files.  
- ✅ Implements industry-standard **C++ best practices**.  

---

## 💡 Why Use a Binary Search Tree (BST)?
A **BST was chosen** as the primary data structure due to its **logarithmic efficiency (O(log n))** for insertion, searching, and sorting. The benefits include:  

- **Automatic sorting**: BST’s in-order traversal provides an **efficient way to print courses in alphanumeric order**.  
- **Efficient search operations**: Searching for a course by number takes **O(log n)** on average, improving performance over **O(n) linear searches** in arrays or linked lists.  
- **Scalability**: The BST structure allows the system to handle large course datasets without performance degradation.

---

## 🛠 Technologies Used
- C++  
- Binary Search Tree (BST) 🌳  
- File Handling (CSV Parsing) 📂  
- Command-line Interface (CLI) 🖥  
- GitHub for Version Control 🛠  

---

## ⚙ Project Setup
### 1️⃣ Setting Up the Development Environment
1. Open **Visual Studio 2019**.  
2. Create a **new C++ Console Application** named `ProjectTwo`.  
3. Add a new file named `ProjectTwo.cpp` under **Source Files**.  

### 2️⃣ Preparing the Course Data File
1. Create a file named `courses.csv` in the same directory as `ProjectTwo.cpp`.  
2. Ensure that the file follows this format:  

```
CSCI100, Introduction to Computer Science  
CSCI101, Introduction to Programming in C++, CSCI100  
CSCI200, Data Structures, CSCI101  
MATH201, Discrete Mathematics  
CSCI300, Introduction to Algorithms, CSCI200, MATH201  
CSCI301, Advanced Programming in C++, CSCI101  
CSCI350, Operating Systems, CSCI300  
CSCI400, Large Software Development, CSCI301, CSCI350  
```

---

## 🛠 Implementing the Data Structure
### 3️⃣ Binary Search Tree (BST) Implementation
- ✅ BST selected for efficient course storage and retrieval.  
- ✅ Implemented a `TreeNode` structure to store courses with **left** and **right** pointers.  
- ✅ Implemented **BST insertion, search, and in-order traversal** for sorted output.  

### 4️⃣ Program Logic
This project follows a **menu-driven approach**, allowing users to:  
1. **Load course data** from `courses.csv`.  
2. **Print all courses** in **sorted order** (in-order BST traversal).  
3. **Search for a course** by course number and display its details and prerequisites.  
4. **Exit** the program.  

**CSV Parsing Logic:**  
- Reads the file **line by line**.  
- Splits each line **by commas** to extract course details.  
- Inserts courses into the **BST** for **efficient retrieval**.  

---

## 🔍 Handling User Input & Error Management
- ✅ **Case-insensitive course searches**.  
- ✅ **Error handling** for invalid inputs and missing files.  
- ✅ **Graceful failure handling** for incorrect file formats or missing prerequisites.  

---

## 📊 Runtime & Memory Efficiency Analysis
### 5️⃣ Runtime Complexity

| Operation          | Data Structure   | Time Complexity |
|--------------------|-----------------|----------------|
| Insert Course     | BST              | O(log n)       |
| Search Course     | BST              | O(log n)       |
| Print All Courses | BST (in-order)   | O(n)           |
| Load Courses      | BST (insert)     | O(n log n)     |


### 6️⃣ Memory Usage
- The BST requires **extra memory** for storing **left and right pointers** per node.  
- Despite slightly **higher memory overhead**, the **logarithmic time complexity** for searching and sorting **outweighs the cost**, making it superior to **array-based approaches**.  

---

## 📜 Reflection
### **What was the problem you were solving?**
The goal was to efficiently **store, retrieve, and sort course data** using the **best data structure**. This required understanding **runtime complexities** and **memory trade-offs**.

### **How did you approach the problem?**
I analyzed multiple **data structures (vector, hash table, BST)** and chose **BST for sorting** because of its **logarithmic efficiency**.

### **How did you overcome challenges?**
- **BST Balancing**: Ensured the BST did not become skewed.
- **Error Handling**: Implemented robust input validation.
- **Sorting Efficiency**: Used **BST in-order traversal** instead of an explicit sorting algorithm.

### **How did this expand your approach to software design?**
- **Taught me the importance of choosing the right data structure.**
- **Reinforced modular programming principles.**
- **Helped me understand scalability better.**

### **How has this project evolved your approach to writing maintainable code?**
- **Using structured classes (`Course`, `BST`) made the code readable.**
- **Encapsulation improved maintainability.**
- **Handling large datasets efficiently became a focus.**

---

## ▶ How to Run the Program
1. **Download** `ProjectTwo.cpp` and `courses.csv`.  
2. **Open** `ProjectTwo.cpp` in **Visual Studio 2019**.  
3. **Place** `courses.csv` in the same directory as `ProjectTwo.cpp`.  
4. **Run** the program:  
   - **Press `Ctrl + F5` or `F5`** in Visual Studio.  

---

## 🔮 Future Enhancements
- Implement **AVL Trees** for self-balancing BST.  
- Use **Graph Data Structures** for course prerequisites.  
- Enhance file handling to support **JSON/XML formats**.  

---

## 🚀 Final Thoughts
This project highlights my **ability to implement efficient data structures** and **write maintainable, scalable code**. Through **BSTs, runtime analysis, and sorting techniques**, I strengthened my understanding of **algorithmic efficiency** and **real-world problem-solving**.
