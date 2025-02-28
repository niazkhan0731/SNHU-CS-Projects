# 🎨 Draw It or Lose It - Software Design & Data Structures

## 📋 Project Summary
This repository showcases my work in **data structures and algorithms**, as well as software design principles. It includes:
- **Project One:** Runtime and memory analysis of different data structures.
- **Project Two:** Sorting and printing courses in alphanumeric order.
- **Draw It or Lose It:** Software design documentation for a web-based game.

---

## 📌 Project One: Runtime & Memory Analysis
The goal of this project was to analyze **the efficiency of different data structures** when storing and retrieving course information. The data structures examined were:

### **1. Vector (Array-Based List)**
- **Runtime Complexity:**
  - Searching: **O(n)** (linear search required).
  - Insertion at end: **O(1)**, but **O(n)** if inserting in a sorted position.
- **Memory Usage:** Contiguous memory allocation, potential resizing overhead.

### **2. Hash Table (Unordered Key-Value Storage)**
- **Runtime Complexity:**
  - Searching: **O(1)** (on average, constant time lookup).
  - Insertion: **O(1)**.
- **Memory Usage:** Requires extra space due to hash collisions (linked lists or open addressing).

### **3. Binary Search Tree (BST) (Sorted Tree Structure)**
- **Runtime Complexity:**
  - Searching: **O(log n)** (on average).
  - Insertion: **O(log n)** (on average).
- **Memory Usage:** Requires extra pointers per node, but provides **ordered traversal**.

### **📌 Key Takeaway:**
- **Hash tables** were the most efficient for fast lookup, while **BSTs** were useful for sorting.  
- **Vectors** were simple but inefficient for large datasets.

---

## 📌 Project Two: Sorting & Printing Courses
For this project, I implemented a **sorting algorithm** to print out a list of Computer Science courses **in alphanumeric order**.

### **📌 Implementation Details**
- **Data Structure Used:** **Binary Search Tree (BST)**
- **Sorting Mechanism:** **In-order traversal** of BST (**O(n) time complexity**).
- **Why BST?** Since course numbers were unique, inserting them into a BST **automatically maintained sorted order**, eliminating the need for an extra sorting step.

---

## **🔍 Reflection**
### **What was the problem you were solving?**
The goal was to efficiently **store, retrieve, and sort course data** using **the best data structure for the task**. This required understanding **runtime complexities** and **memory trade-offs**.

### **How did you approach the problem?**
I analyzed multiple **data structures (vector, hash table, BST)** and chose **BST for sorting** because of its **logarithmic efficiency**.

### **How did you overcome any challenges?**
- **Hash Table Collisions**: Implemented chaining to handle collisions.
- **Sorting Efficiency**: Used **BST in-order traversal** instead of an explicit sorting algorithm.
- **Memory Constraints**: Optimized BST by balancing it.

### **How has your work on this project expanded your software design approach?**
- **Taught me the importance of choosing the right data structure.**
- **Helped me understand trade-offs between time complexity and memory usage.**
- **Reinforced the importance of modular, reusable code.**

### **How has this improved your ability to write maintainable code?**
- **Using structured classes (e.g., `Course`, `BST`) made the code readable.**
- **Efficient data structures reduced redundant operations.**
- **Encapsulation improved maintainability.**

---

## **📜 Document Revision History**
| Version | Date       | Author     | Comments |
|---------|-----------|------------|--------------------------------------|
| 1.0     | 09/21/2024 | Niaz Khan | Initial version for submission |
| 2.0     | 10/05/2024 | Niaz Khan | Updated evaluation and platform analysis |
| 3.0     | 10/19/2024 | Niaz Khan | Added runtime analysis and sorting implementation |

---

## **💡 Final Thoughts**
This repository showcases my work with **data structures and algorithms**. The combination of **runtime analysis, sorting techniques, and system design principles** helped me build more efficient and maintainable programs.

---

### **🚀 Next Steps**
- Implement **AVL Trees** to optimize BST balancing.
- Explore **graph-based representations** for prerequisite course dependencies.
- Improve sorting using **Merge Sort or Quick Sort** in future projects.

---

Thank you for checking out the project! Feel free to explore the documentation and reach out with any questions or feedback. Let's build something amazing together! 🌐🎨🚀
