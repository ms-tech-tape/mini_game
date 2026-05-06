# 🎮 Mini Game Project in C++

A **console-based Tic Tac Toe game** developed in **C++**, demonstrating the practical application of fundamental programming concepts such as **loops, arrays, conditional statements, functions, and modular programming**.

---

## 📌 Table of Contents

1. [Project Overview](#-project-overview)
2. [Objectives](#-objectives)
3. [Features](#-features)
4. [Technologies Used](#-technologies-used)
5. [Project Structure](#-project-structure)
6. [File Descriptions](#-file-descriptions)
7. [Installation & Setup](#-installation--setup)
8. [How to Compile and Run](#-how-to-compile-and-run)
9. [How to Play](#-how-to-play)
10. [Game Rules](#-game-rules)
11. [Concepts Demonstrated](#-concepts-demonstrated)
12. [Sample Output](#-sample-output)
13. [Troubleshooting](#-troubleshooting)
14. [Future Enhancements](#-future-enhancements)
15. [Author](#-author)
16. [License](#-license)

---

## 📖 Project Overview

This project is a **console-based Tic Tac Toe game** built entirely in **C++**. It allows two players to play the classic Tic Tac Toe game on a single computer through an interactive menu.

The aim of this project is to **showcase core programming logic** through a real-world game implementation. The code is split into multiple files to maintain **modularity, readability, and reusability**.

---

## 🎯 Objectives

- To design and implement an **interactive console-based game** in C++.
- To demonstrate effective use of:
  - Loops (`for`, `while`, `do-while`)
  - Arrays (2D arrays)
  - Conditional Statements (`if-else`, `switch`)
  - Functions and modular programming
- To implement **dynamic board rendering** after each move.
- To incorporate **win/draw detection logic**.
- To provide a **replay option** for continuous gameplay.
- To strengthen problem-solving and logic-building skills.

---

## ✨ Features

✅ **Interactive Main Menu** – Easy navigation with menu options  
✅ **Two-Player Gameplay** – Player X vs Player O  
✅ **Dynamic Board Display** – Board refreshes after every move  
✅ **Win Detection** – Detects winner across rows, columns, diagonals  
✅ **Draw Detection** – Identifies tied games automatically  
✅ **Input Validation** – Handles invalid moves gracefully  
✅ **Replay Option** – Play multiple rounds without re-running the program  
✅ **Modular Code Structure** – Clean and organized code  
✅ **User-Friendly Interface** – Clear instructions and prompts  

---

## 🛠 Technologies Used

| Technology | Purpose |
|------------|---------|
| **C++** | Core programming language |
| **g++ (MinGW)** | Compiler |
| **VS Code** | Code editor |
| **`<iostream>`** | Input/output operations |
| **`<cstdlib>`** | System commands (clear screen) |

---

## 📁 Project Structure
MiniGameProject/
│
├── main.cpp              # Main menu (entry point)
├── tic_tac_toe.cpp       # Tic Tac Toe game logic
└── README.md             # Project documentation                
---

## 📂 File Descriptions

### 🔹 `main.cpp`
The **entry point** of the project. It displays the **main menu** and allows the user to start the Tic Tac Toe game or exit.

### 🔹 `tic_tac_toe.cpp`
Contains the **complete logic for the Tic Tac Toe game**, including:
- Board initialization and display
- Player turn handling
- Move validation
- Win and draw detection
- Replay functionality

### 🔹 `README.md`
Documentation explaining the project, setup instructions, and usage details.

---

## ⚙️ Installation & Setup

### Step 1: Install Required Tools

1. **Visual Studio Code** – [Download Here](https://code.visualstudio.com/)
2. **MinGW (g++ Compiler)** – [Download Here](https://www.mingw-w64.org/)
3. **C/C++ Extension** for VS Code (install from Extensions Marketplace)

### Step 2: Configure Environment

1. Install MinGW and add the `bin` folder path to **System Environment Variables → PATH**.
2. Verify installation by running this command in your terminal:
   ```bash
   g++ --version
   