STUDENT RECORD MANAGEMENT SYSTEM

#1. Project Description

The Student Record Management System is a menu-driven C application developed using a singly linked list.

It stores student records dynamically using dynamic memory allocation.

Each student record contains:
- Roll Number
- Student Name
- Percentage

#2. Features

1. Add a student record.
2. Delete a student by roll number or name.
3. Display all student records.
4. Modify student details.
5. Save records into student.dat.
6. Load saved records automatically.
7. Sort records by name.
8. Sort records by percentage.
9. Delete all student records.
10. Reverse the linked list.
11. Exit with or without saving.

#3. Technologies Used

- C Programming
- Singly Linked List
- Dynamic Memory Allocation
- File Handling
- Searching and Sorting

#4. Project Files

- student.h
- stud_main.c
- stud_add.c
- stud_del.c
- stud_show.c
- stud_mod.c
- stud_save.c
- stud_sort.c
- reverse.c

#5. Compilation

Compile all source files using:

gcc stud_main.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_save.c stud_sort.c reverse.c -o student

#6. Execution

Run the application using:

./student

#7. File Storage

Student records are stored in the file student.dat.
Saved records are loaded automatically when the application starts.

# 8. Project Objective

The objective of this project is to understand singly linked lists, dynamic memory allocation, modular programming, searching, sorting and file handling in C.
