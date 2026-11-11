#include "student.h"

void add_student(void)
{
    struct student *newnode, *temp;

    newnode = malloc(sizeof(struct student));

    if(newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &newnode->rollno);

    printf("Enter name: ");
    scanf("%s", newnode->name);

    printf("Enter percentage: ");
    scanf("%f", &newnode->percentage);

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

    printf("Student added successfully\n");
}

