CGPA Calculator – C++ Project

A simple and interactive C++ console application to calculate a student's GPA per semester and overall CGPA, based on course credits and marks. Ideal for academic use, portfolio building, or learning C++ OOP and logic.

--------------------------------------------------

Features:

- Add course details (name, credits, and marks)
- Auto-conversion of marks to grade points
- View all added courses for the current semester
- Calculate GPA for the semester
- Track CGPA across multiple semesters
- GPA data resets after each semester for fresh input
- User-friendly console interface with input validation

--------------------------------------------------

Grade to Grade Point Mapping:

| Marks Range   | Grade | Grade Point |
|---------------|--------|-------------|
| 91 – 100      | O      | 10.0        |
| 81 – 90       | A+     | 9.0         |
| 71 – 80       | A      | 8.0         |
| 61 – 70       | B+     | 7.0         |
| 51 – 60       | B      | 6.0         |
| 41 – 50       | C      | 5.0         |
| 40            | P      | 4.0         |
| Below 40      | F      | 0.0         |

--------------------------------------------------

Technologies Used:

- C++ Programming Language
- Object-Oriented Programming (Classes & Encapsulation)
- STL: vector
- Console Input/Output
- Basic Arithmetic and Control Structures

--------------------------------------------------

Sample Input:

> Add Course: C (3 credits, 99 marks)
> Add Course: Python (2 credits, 89 marks)
> View Courses
> Calculate GPA → 9.60
> Add Course: Java (4 credits, 56 marks)
> Calculate GPA → 6.00
> Calculate CGPA → 7.80

--------------------------------------------------

Future Ideas:

- Display letter grades (A+, B, etc.)
- Save semester-wise history to a file
- Add undo/redo functionality
- Create a GUI version using Qt or web version using HTML/CSS/JS

--------------------------------------------------

Author:

Hetavi Makwana 

B.Tech Computer Engineering Student (2nd year)

Completed certified courses in C, C++, HTML, and CSS via Royal Technosoft (Oracle-affiliated program)
