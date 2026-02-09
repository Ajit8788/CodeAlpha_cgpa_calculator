# 🎓 GPA & CGPA Calculator (C++)

## 📌 Project Description

This is a simple C++ program that calculates the **Semester GPA** and **Overall CGPA** based on user input.

The program:

* Takes the number of courses as input
* Accepts grade and credit hours for each course
* Calculates total credits
* Calculates total grade points
* Computes Semester GPA
* Displays the final CGPA along with individual course details

This project demonstrates basic concepts of:

* C++ Input/Output
* Vectors
* Loops
* Arithmetic calculations
* Formatting output using `iomanip`

---

## 🛠 Technologies Used

* C++
* Standard Template Library (STL)
* iostream
* vector
* iomanip

---

## 📐 GPA Formula Used

[
GPA = \frac{\sum (Grade \times Credit\ Hours)}{\sum Credit\ Hours}
]

For a single semester:

```
CGPA = GPA
```

---

## ▶️ How to Run the Program

### Step 1: Compile the program

```bash
g++ main.cpp -o gpa
```

### Step 2: Run the program

```bash
./gpa
```

---

## 🧾 Sample Input

```
Enter number of courses: 3

Course 1
Enter grade: 8
Enter credit hours: 3

Course 2
Enter grade: 7
Enter credit hours: 4

Course 3
Enter grade: 9
Enter credit hours: 2
```

---

## 📤 Sample Output

```
========== Course Details ==========
Course 1 | Grade: 8.00 | Credit Hours: 3
Course 2 | Grade: 7.00 | Credit Hours: 4
Course 3 | Grade: 9.00 | Credit Hours: 2

Total Credits: 9
Semester GPA: 7.78
Overall CGPA: 7.78
```

---

## 🚀 Features

* Dynamic number of courses
* Accurate GPA calculation
* Clean formatted output
* Easy to understand code structure

---

## 🎯 Future Improvements

* Add input validation
* Support multiple semesters
* Convert into OOP-based program
* Add file handling support
* Create a GUI version

---

## 👨‍💻 Author

Ajit RATHOD

---

## 📄 License

This project is open-source and free to use for educational purposes.