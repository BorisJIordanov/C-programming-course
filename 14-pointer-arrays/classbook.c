#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 16

typedef struct {
    char name[MAX_NAME_LENGTH];
    float *grades;
} Student;

void readString(char *str, int length) {
    fgets(str, length, stdin);
    str[strcspn(str, "\n")] = '\0';
}

int main() {
    int numSubjects;
    char **subjects;
    Student *students = NULL;
    int numStudents = 0;

    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);
    while (numSubjects <= 0) {
        printf("Number of subjects must be a positive number. Try again: ");
        scanf("%d", &numSubjects);
    }

    subjects = (char **)malloc(numSubjects * sizeof(char *));
    for (int i = 0; i < numSubjects; i++) {
        subjects[i] = (char *)malloc(MAX_NAME_LENGTH * sizeof(char));
        printf("Enter the name of subject %d: ", i + 1);
        getchar(); // to consume the newline character left by scanf
        readString(subjects[i], MAX_NAME_LENGTH);
    }

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Enter a new student\n");
        printf("2. Print the class book\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            students = (Student *)realloc(students, (numStudents + 1) * sizeof(Student));
            printf("Enter the name of the student: ");
            getchar(); // to consume the newline character left by scanf
            readString(students[numStudents].name, MAX_NAME_LENGTH);

            students[numStudents].grades = (float *)malloc(numSubjects * sizeof(float));
            for (int i = 0; i < numSubjects; i++) {
                printf("Enter the grade for %s: ", subjects[i]);
                scanf("%f", &students[numStudents].grades[i]);
            }
            numStudents++;
        } else if (choice == 2) {
            printf("%-15s", "");
            for (int i = 0; i < numSubjects; i++) {
                printf("%-15s", subjects[i]);
            }
            printf("\n");

            for (int i = 0; i < numStudents; i++) {
                printf("%-15s", students[i].name);
                for (int j = 0; j < numSubjects; j++) {
                    printf("%-15.2f", students[i].grades[j]);
                }
                printf("\n");
            }
        }
    } while (choice != 3);

    for (int i = 0; i < numSubjects; i++) {
        free(subjects[i]);
    }
    free(subjects);

    for (int i = 0; i < numStudents; i++) {
        free(students[i].grades);
    }
    free(students);

    return 0;
}