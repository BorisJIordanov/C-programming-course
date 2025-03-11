#include <stdio.h>
#include <stdlib.h>

#define CHECK_ALLOC(ptr) if ((ptr) == NULL) { fprintf(stderr, "Memory allocation failed\n"); exit(1); }

void print_menu() {
    printf("\nМеню:\n");
    printf("1. Извеждане на средния успех\n");
    printf("2. Добавяне на нова оценка\n");
    printf("3. Изтриване на последната оценка\n");
    printf("4. Изход\n");
    printf("Изберете опция: ");
}

double calculate_average(int *grades, int count) {
    if (count == 0) return 0.0;
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += grades[i];
    }
    return (double)sum / count;
}

int main() {
    int *grades = NULL;
    int count = 0;
    int capacity = 0;

    printf("Enter the number of existing programming grades: ");
    while (scanf("%d", &count) != 1 || count < 0) {
        printf("Please enter a non-negative number: ");
        while (getchar() != '\n'); // clear input buffer
    }

    if (count > 0) {
        grades = (int *)malloc(count * sizeof(int));
        CHECK_ALLOC(grades);

        printf("Enter the grades:\n");
        for (int i = 0; i < count; i++) {
            printf("Grade %d: ", i + 1);
            while (scanf("%d", &grades[i]) != 1) {
                printf("Please enter a valid grade: ");
                while (getchar() != '\n'); // clear input buffer
            }
        }
        capacity = count;
    }

    int option;
    do {
        print_menu();
        while (scanf("%d", &option) != 1) {
            printf("Please enter a valid option: ");
            while (getchar() != '\n'); // clear input buffer
        }

        switch (option) {
            case 1:
                printf("The average grade is: %.2f\n", calculate_average(grades, count));
                break;
            case 2: {
                int new_grade;
                printf("Enter the new grade: ");
                while (scanf("%d", &new_grade) != 1) {
                    printf("Please enter a valid grade: ");
                    while (getchar() != '\n'); // clear input buffer
                }
                int *new_grades = (int *)realloc(grades, (count + 1) * sizeof(int));
                CHECK_ALLOC(new_grades);
                grades = new_grades;
                grades[count++] = new_grade;
                break;
            }
            case 3:
                if (count > 0) {
                    int *new_grades = (int *)realloc(grades, (count - 1) * sizeof(int));
                    CHECK_ALLOC(new_grades);
                    grades = new_grades;
                    count--;
                } else {
                    printf("No grades to delete.\n");
                }
                break;
            case 4:
                free(grades);
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    } while (option != 4);

    return 0;
}