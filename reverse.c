#include"student.h"

void reverse_student(void)
{
    struct student *prev = NULL;
    struct student *current = head;
    struct student *nextnode;

    while(current != NULL)
    {
        nextnode = current->next;
        current->next = prev;
        prev = current;
        current = nextnode;
    }

    head = prev;

    printf("List reversed successfully\n");
    show_student();
}

