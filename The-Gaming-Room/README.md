# 🎨 Draw It or Lose It - Software Design Document

Welcome to the repository for **"Draw It or Lose It,"** a web-based game inspired by the classic 1980s game "Win, Lose or Draw." This README will take you through my journey in designing and documenting the architecture for this fun and interactive gaming application. Below, you'll find reflections on the design process, insights from development, and thoughts on improvements for the future. Enjoy!

---

## 📋 Project Summary

### 🎮 The Gaming Room Client & Requirements
**The Gaming Room** is a client specializing in interactive and competitive gaming experiences. They approached me to design a distributed web-based game where multiple teams can compete by guessing puzzles based on gradually revealed drawings. Key requirements included:

- Support for **one or more teams** per game.
- **Multiple players** per team.
- Enforcing **unique game and team names**.
- Only **one active game instance** in memory at a time.
- Four rounds of play, with drawings fully revealed at the 30-second mark of each one-minute round.

This setup aimed to deliver an engaging experience while maintaining efficiency, scalability, and cross-platform compatibility.

---

## 🌟 Highlights

### 📝 Documentation Excellence
I believe the documentation shines in its **clear structure and logical flow**. By categorizing the requirements, constraints, architecture, and recommendations, I created a comprehensive and understandable design document. The UML Class Diagram effectively communicates the core structure of the game, showcasing how entities like `Game`, `Team`, and `Player` interact, making it easy for developers to follow.

### 💡 How the Design Process Informed Development
Working through the design document helped me maintain a clear vision while coding. It allowed me to anticipate challenges related to **scalability, cross-platform compatibility, and security** early in the process. This proactive planning saved development time and ensured a consistent approach to code structure and architecture.

---

## 🔄 Areas for Improvement

### 🛠 What I'd Revise & Why
If I had to choose one part to revise, it would be the **Domain Model** section. While effective, I’d like to expand the UML diagram to include **additional entities and relationships**, such as game statistics tracking and leaderboard functionality. These features would enrich the game and provide a more comprehensive view of the data flow.

---

## 🔍 Addressing the User's Needs

### 🕹️ User-Centric Design
I interpreted the client’s needs by focusing on **usability and seamless interaction** across devices. Each design decision aimed to enhance the user experience, ensuring that the game’s interface remained intuitive regardless of platform. By implementing **secure user authentication** and enforcing unique game/team identifiers, I aligned the software with user expectations for a safe and organized gaming experience.

Understanding the user's needs was crucial to the design—it ensured that the application would not only be technically sound but also enjoyable and accessible for the target audience.

---

## 🛠 Design Approach & Future Techniques

### 🖥️ My Design Methodology
To tackle the project, I employed a **modular and iterative approach**, focusing first on establishing a solid architecture before delving into specific features. The use of the Singleton pattern for `GameService` ensured **efficiency** in handling game states, while the microservices recommendation in the document aimed to keep each feature **scalable and independent**.

### 🔮 Future Strategies
Moving forward, I would use **Domain-Driven Design (DDD)** to better align the business requirements with the technical implementation. Additionally, incorporating **Behavior-Driven Development (BDD)** could help create more user-centric features, enabling the creation of tests that directly reflect user scenarios. These techniques would provide clearer alignment between design and development, streamlining future projects.

---

## 📜 Document Revision History

| Version | Date       | Author     | Comments                                      |
|---------|------------|------------|---------------------------------------------- |
| 1.0     | 09/21/2024 | Niaz Khan  | Initial version for submission                |
| 2.0     | 10/05/2024 | Niaz Khan  | Updated evaluation and platform analysis      |
| 3.0     | 10/19/2024 | Niaz Khan  | Added recommendations                         |

---

Thank you for checking out the project! Feel free to explore the documentation and reach out with any questions or feedback. Let's build something amazing together! 🌐🎨🚀

