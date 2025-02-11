#include "processes.h"
#include <stdio.h>
#include <string.h>

Process processes[MAX_PROCESSES];
int processcount = 0;

static int nextprocessid(void) {
    static int current_id = 1;
    if (current_id > 0) {
        return current_id++;
    }
    return 0;
}

int createnewprocess(const char *name) {
    if (processcount >= MAX_PROCESSES) {
        printf("Error: Maximum number of processes reached.\n");
        return 0;
    }

    int id = nextprocessid();
    if (id == 0) {
        printf("Error: No more process IDs available.\n");
        return 0;
    }

    Process new_process = {id, ""};
    strncpy(new_process.name, name, PROCESS_NAME_LENGTH);
    new_process.name[PROCESS_NAME_LENGTH] = '\0';

    processes[processcount++] = new_process;
    return id;
}

void stopprocess(int id) {
    int index = -1;
    for (int i = 0; i < processcount; ++i) {
        if (processes[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Error: Process with ID %d not found.\n", id);
        return;
    }

    for (int i = index; i < processcount - 1; ++i) {
        processes[i] = processes[i + 1];
    }
    --processcount;
}

void printprocesses(void) {
    if (processcount == 0) {
        printf("No running processes.\n");
        return;
    }

    for (int i = 0; i < processcount; ++i) {
        printf("Process ID: %d, Name: %s\n", processes[i].id, processes[i].name);
    }
}
