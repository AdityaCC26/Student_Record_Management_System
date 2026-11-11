#include "student.h"

struct student *head = NULL;

int main()
{
    char choice;
    char exit_choice;

    load_student();

    while(1)
    {
        printf("\n***** STUDENT RECORD MENU *****\n");

        printf("a : Add student\n");
        printf("d : Delete student\n");
        printf("s : Show students\n");
        printf("m : Modify student\n");
        printf("v : Save records\n");
        printf("t : Sort records\n");
        printf("l : Delete all records\n");
        printf("r : Reverse list\n");
        printf("e : Exit\n");

        printf("\nEnter choice: ");
        scanf(" %c", &choice);

        switch(choice)
        {
            case 'a':
            case 'A':
                add_student();
                break;

            case 'd':
            case 'D':
                delete_student();
                break;

            case 's':
            case 'S':
                show_student();
                break;

            case 'm':
            case 'M':
                modify_student();
                break;

            case 'v':
            case 'V':
                save_student();
                break;

            case 't':
            case 'T':
                sort_student();
                break;

            case 'l':
            case 'L':
                delete_all();
                break;

            case 'r':
            case 'R':
                reverse_student();
                break;

            case 'e':
            case 'E':
                printf("Save before exit? (y/n): ");
                scanf(" %c", &exit_choice);

                if(exit_choice == 'y' || exit_choice == 'Y')
                    save_student();

                printf("Program terminated.\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}

