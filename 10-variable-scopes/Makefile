all:
    gcc -c processes.c
    gcc -c taskmanager.c
    gcc -o taskmanager processes.o taskmanager.o

processes.c:
    gcc -c processes.c

taskmanager.c:
    gcc -c taskmanager.c

clear:
    rm -f taskmanager processes.o taskmanager.o