#ifndef PROCESSES_H
#define PROCESSES_H

#define MAX_PROCESSES 5
#define PROCESS_NAME_LENGTH 30

typedef struct {
    int id;
    char name[PROCESS_NAME_LENGTH + 1];
} Process;

extern Process processes[MAX_PROCESSES];
extern int processcount;

int createnewprocess(const char *name);
void stopprocess(int id);
void printprocesses(void);

#endif // PROCESSES_H
