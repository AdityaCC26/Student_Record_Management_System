#include "student.h"

void modify_student(void)
{
    struct student *temp;
    int roll, found = 0;
    char name[50];

    if(head == NULL)
    {
        printf("No records available\n");
        return;
    }

    printf("Enter roll number to modify: ");
    scanf("%d", &roll);

    temp = head;

    while(temp != NULL)
    {
        if(temp->rollno == roll)
        {
            found = 1;
            break;
        }

        temp = temp->next;
    }

    if(found == 0)
    {
        printf("Record not found\n");
        return;
    }

    printf("\nCurrent Details:\n");
    printf("Roll No: %d\n", temp->rollno);
    printf("Name: %s\n", temp->name);
    printf("Percentage: %.2f\n", temp->percentage);

    printf("\nEnter new name: ");
    scanf("%49s", name);

    printf("Enter new percentage: ");
    scanf("%f", &temp->percentage);

    strcpy(temp->name, name);

    printf("\nStudent modified successfully\n");
}

