#include "processes.h"
#include <stdio.h>
#include <string.h>

int main(void) {
    int choice;
    char name[PROCESS_NAME_LENGTH + 1];
    int id;

    while (1) {
        printf("Task Manager:\n");
        printf("1. Create Process\n");
        printf("2. List Processes\n");
        printf("3. Stop Process\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter process name: ");
                scanf("%s", name);
                int new_id = createnewprocess(name);
                if (new_id != 0) {
                    printf("Process created with ID: %d\n", new_id);
                }
                break;

            case 2:
                printprocesses();
                break;

            case 3:
                printf("Enter process ID to stop: ");
                scanf("%d", &id);
                stopprocess(id);
                break;

            case 4:
                printf("Exiting Task Manager.\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
