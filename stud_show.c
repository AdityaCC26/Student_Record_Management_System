#include "student.h"

void show_student()
{
    struct student *temp;

    temp = head;

    if(temp == NULL)
    {
        printf("No student records available\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("\nRoll No: %d", temp->rollno);
            printf("\nName: %s", temp->name);
            printf("\nPercentage: %.2f\n", temp->percentage);

            temp = temp->next;
        }
    }
}

