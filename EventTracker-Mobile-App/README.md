# 📆 Event Tracker Mobile App (Android)

![Status](https://img.shields.io/badge/Project-Final-green)
![Platform](https://img.shields.io/badge/Built%20With-Java-blue)
![IDE](https://img.shields.io/badge/IDE-Android%20Studio-3ddc84)
![Database](https://img.shields.io/badge/Storage-SQLite-lightgrey)

---

## 🗂️ Repository Contents

- `EventTrackApp_Final.zip` – Complete mobile app with source code and UI designs  
  *(Unzip to open in Android Studio)*

---

## 🧠 Overview

This Android mobile application was created as the final project for **CS-360: Mobile Architecture and Programming** at Southern New Hampshire University. It serves as a **portfolio artifact** to demonstrate my ability to design, build, and test a fully functional mobile app using industry-standard practices.

The app functions as a **personal event tracker** that supports user login/registration, local data storage via SQLite, and event management through a clean, user-friendly interface.

---

## 🎯 Project Summary

### 🔹 App Goals and User Needs

The Event Tracker App was developed to meet the following user needs:
- Keep track of personal or professional events
- Log in securely with a custom username and password
- Create, view, update, and delete event entries
- Experience a clean and intuitive mobile UI

The app focuses on **simplicity, clarity, and control**, putting user experience at the center of its design.

---

## 📲 Screens and Features

- **Login/Register Screen** – Secure user access
- **Event Grid View** – View saved events in a grid layout
- **Add/Edit/Delete** – Full CRUD functionality with SQLite
- **SMS Notification Prompt** – Permission request flow simulation

### 👤 User-Centered UI Design

My UI layout and feature arrangement were designed with:
- Single-handed phone usage in mind
- Easy-to-reach controls and clear feedback
- Organized form fields and consistent styling

These decisions resulted in a design that is **accessible, responsive, and visually appealing**.

---

## 💻 Development Approach

- Started with layout design in XML (from Project Two)
- Implemented logic in Java with proper separation of concerns
- Used `SQLiteOpenHelper` for local database operations
- Applied `Intent` navigation and Activity lifecycle awareness

This iterative approach helped me build confidence in mobile development and taught me how to manage app state and user flows effectively.

---

## ✅ Testing & Functionality

I tested the application using:
- Android Emulator (API 34, Pixel devices)
- Edge case scenarios like:
  - Empty fields
  - Repeated user entries
  - Data refresh after CRUD operations

These tests revealed a few layout and state update issues early, which I resolved by refreshing adapters and optimizing database helper methods.

---

## 💡 Challenges and Innovation

A key challenge was syncing the event list with live database changes. To overcome this:
- I implemented a custom adapter and ensured it was refreshed after every CRUD operation
- Carefully handled activity restarts and data persistence

This sharpened my skills in managing Android's component lifecycles and improving app responsiveness.

---

## 🌟 Highlight Achievement

The successful integration of **SQLite CRUD operations** and **user authentication** demonstrates my ability to combine:
- Persistent storage
- Front-end UI design
- Android platform knowledge

It’s a solid foundation for building more advanced mobile apps in the future.

---

## 🧳 Reflection

This project required me to balance design thinking, coding discipline, and real-world usability. From the planning phase to the final ZIP build, I learned how to:
- Translate mockups into working code
- Debug and iterate on mobile UI and logic
- Maintain code organization for reusability

The **Event Tracker App** now stands as a complete, self-contained mobile artifact in my GitHub portfolio.

---

## 🔗 Portfolio Submission Details

📁 `EventTrackApp_Final.zip` has been submitted to this repository as my official CS-360 portfolio artifact.

✅ Instructor has been added as a collaborator to this GitHub repository.

---

## 📬 Contact

**Niaz Khan**  
[GitHub Profile](https://github.com/niazkhan0731)  
📧 niazkhan0731@gmail.com  
📍 New York, NY

---

> 🎓 *Developed as part of CS-360: Mobile Architecture and Programming @ Southern New Hampshire University*

