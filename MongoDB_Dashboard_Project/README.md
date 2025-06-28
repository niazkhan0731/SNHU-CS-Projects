# CS-340 Final Project: Grazioso Salvare Interactive Dashboard

## 📘 Project Overview

This project presents an interactive dashboard for **Grazioso Salvare**, an organization focused on training dogs for search-and-rescue operations. Built using **Python**, **Dash**, and **MongoDB**, the dashboard allows users to filter shelter animal data, visualize outcomes, and view geolocated office markers.

Key features include:
- Interactive DataTable for querying animal records
- Leaflet map showing geolocated animals
- Outcome-based chart visualization (bar or pie)
- Connection to MongoDB via a reusable CRUD Python module

---

## 💭 Reflection Questions

### 🧠 How do you write programs that are maintainable, readable, and adaptable?

I used a modular approach by separating database operations into a custom `animal_shelter.py` CRUD class. This helped isolate the data access layer from the user interface, making the code easier to test, maintain, and reuse. This structure allowed seamless integration with the dashboard and could be reused in other applications like REST APIs or CLI tools in the future.

### 🧩 How do you approach a problem as a computer scientist?

I approached the dashboard requirements by decomposing the problem into frontend and backend tasks. I first designed a MongoDB schema and CRUD class, then layered in filtering, visualizations, and map rendering using Dash. This iterative, test-driven approach helped me solve the client’s requirements logically and efficiently. Compared to earlier assignments, this was more open-ended and integrated multiple systems.

### 💡 What do computer scientists do, and why does it matter?

Computer scientists use technology to solve real-world problems. This project transformed raw animal shelter data into a tool that could improve operations for Grazioso Salvare. By providing interactive data exploration and geographic visualization, the dashboard helps them identify candidates for rescue training faster and more effectively. This kind of work empowers organizations to make data-informed decisions.

---

## 📂 Files Included

- `ProjectTwoDashboard.ipynb` – Main dashboard code in Jupyter Notebook
- `animal_shelter.py` – CRUD module for MongoDB interaction
- `aac_shelter_outcomes.csv` – Original dataset used for MongoDB
- `Grazioso Salvare Logo.png` – Logo used in dashboard
- `ProjectTwo_README.docx` – Word version of written summary
- `ProjectTwo_Final.zip` – Full zipped project folder

---

## 💻 Technologies Used

- Python 3
- Dash (Plotly)
- MongoDB with PyMongo
- Pandas
- Jupyter Notebook
- Dash Leaflet (Map integration)

---

## 🚀 How to Launch the Dashboard

1. Launch Jupyter Notebook in your environment.
2. Open `ProjectTwoDashboard.ipynb`.
3. Run all cells to launch the Dash dashboard.
4. The app will open locally at: `http://127.0.0.1:8050/`

---

## 👤 Author

**Niaz Khan**  
CS-340 – Southern New Hampshire University

---

## 🔗 Submission Info

This repository is a portfolio submission for CS-340. The instructor has been added as a GitHub collaborator. All project files and documentation are included.
