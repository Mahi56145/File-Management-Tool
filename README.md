# File-Management-Tool

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: MAHIPAL

*INTERN ID*: CT08PBA

*DOMAIN*: C++ PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTHOSH

*DESCRIPTION*:
The File Management Tool is a simple yet essential C++ application designed to handle basic file operations such as reading, writing, and appending text files. This project demonstrates the fundamental concepts of file handling in C++, including working with file streams (fstream) to manipulate text files efficiently.
File management is a crucial aspect of software development, as it allows programs to store, retrieve, and modify persistent data. This tool provides an interactive menu-driven interface where users can enter a filename and perform various operations on it.

Project Objectives:
The primary goal of this task is to develop a C++ application that:
✅ Reads from a file
✅ Writes to a file (overwrites existing content)
✅ Appends new content to a file
✅ Ensures proper handling of file operations (error handling)

Implementation Details:
The File Management Tool follows a structured approach:
1️⃣ User Input for File Name:
The program prompts the user to enter a file name (e.g., data.txt)
If the file does not exist, it creates a new one.
2️⃣ Interactive Menu System:
The program presents a menu with four options:
1. Write to File
2. Read from File
3. Append to File
4. Exit
3️⃣ File Operations:
Write to File: Users can input text, and the program writes it to the file (overwriting existing content).
Read from File: Displays the contents of the file on the screen.
Append to File: Users can add new text without deleting previous content.
4️⃣ Proper Error Handling:
The program checks if the file exists before reading it.
If a file cannot be opened, an error message is displayed.

Code Explanation:
The core logic of the File Management Tool is implemented using fstream in C++. The program makes use of:
ofstream (Output File Stream) → To write data to a file
ifstream (Input File Stream) → To read data from a file
fstream (File Stream) → To append data to a file
It uses a while loop to keep the menu running until the user chooses the "Exit" option. The program also utilizes getline() for handling multi-word text input.

Benefits of the Project:
✔ Helps in understanding file handling concepts in C++.
✔ Improves knowledge of user interaction and input validation.
✔ Strengthens problem-solving and menu-driven program implementation.
✔ Demonstrates best practices in error handling and structured programming.

Conclusion:
This File Management Tool is a practical project for learning how to handle files in C++. It showcases how to perform essential file operations interactively, making it a useful learning experience for interns.
By completing this task, interns gain valuable experience in C++ programming, file handling techniques, and user input management—skills that are fundamental in real-world software development.

*OUTPUT*:

![Image](https://github.com/user-attachments/assets/a69449b8-1059-4855-ae6e-3c4db68e3c33)
