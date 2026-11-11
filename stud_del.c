#include "student.h"

void delete_student(void)
{
    struct student *temp, *prev;
    int roll;

    if(head == NULL)
    {
        printf("No records available\n");
        return;
    }

    printf("Enter roll number to delete: ");
    scanf("%d", &roll);

    temp = head;
    prev = NULL;

    while(temp != NULL)
    {
        if(temp->rollno == roll)
        {
            if(prev == NULL)
                head = temp->next;
            else
                prev->next = temp->next;

            free(temp);

            printf("Student deleted successfully\n");
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    printf("Student record not found\n");
}

