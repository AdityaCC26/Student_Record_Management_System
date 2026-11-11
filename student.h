#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
};

extern struct student *head;

void add_student(void);
void delete_student(void);
void show_student(void);
void modify_student(void);
void sort_student(void);
void delete_all(void);
void reverse_student(void);
void save_student(void);
void load_student(void);
void free_student(void);

