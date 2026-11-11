#include"student.h"

void sort_student(void)
{
    struct student *temp, *ptr;
    int roll;
    char name[50];
    float percentage;
    char choice;

    if(head == NULL)
    {
        printf("No records available\n");
        return;
    }

    printf("N. Sort by name\n");
    printf("P. Sort by percentage\n");
    scanf(" %c", &choice);

    for(temp = head; temp != NULL; temp = temp->next)
    {
        for(ptr = temp->next; ptr != NULL; ptr = ptr->next)
        {
            if((choice == 'N' || choice == 'n') &&
               strcmp(temp->name, ptr->name) > 0 ||
               (choice == 'P' || choice == 'p') &&
               temp->percentage < ptr->percentage)
            {
                roll = temp->rollno;
                temp->rollno = ptr->rollno;
                ptr->rollno = roll;

                strcpy(name, temp->name);
                strcpy(temp->name, ptr->name);
                strcpy(ptr->name, name);

                percentage = temp->percentage;
                temp->percentage = ptr->percentage;
                ptr->percentage = percentage;
            }
        }
    }

    printf("Sorting completed\n");
    show_student();
}

