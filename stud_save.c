#include "student.h"

void save_student(void)
{
    FILE *fp;
    struct student *temp;

    fp = fopen("student.dat", "w");

    if(fp == NULL)
    {
        printf("File not opened\n");
        return;
    }

    temp = head;

    while(temp != NULL)
    {
        fprintf(fp, "%d %s %f\n",
                temp->rollno,
                temp->name,
                temp->percentage);

        temp = temp->next;
    }

    fclose(fp);

    printf("Records saved successfully\n");
}

void load_student(void)
{
    FILE *fp;
    struct student *newnode;
    struct student *temp;

    int rollno;
    char name[50];
    float percentage;

    fp = fopen("student.dat", "r");

    if(fp == NULL)
    {
        printf("File not found\n");
        return;
    }

    while(fscanf(fp, "%d %49s %f",
                 &rollno, name, &percentage) == 3)
    {
        newnode = malloc(sizeof(struct student));

        newnode->rollno = rollno;
        strcpy(newnode->name, name);
        newnode->percentage = percentage;
        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }

    fclose(fp);

    printf("Records loaded successfully\n");
}

void delete_all(void)
{
    struct student *temp;

    while(head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    printf("All records deleted\n");
}

