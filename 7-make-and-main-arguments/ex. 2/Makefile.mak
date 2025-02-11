CC = gcc
CFLAGS = -Wall -Wextra -pedantic

EXEC = help.exe

all: $(EXEC)

$(EXEC): main.o
    $(CC) $(CFLAGS) -o $(EXEC) main.o

main.o: main.c
    $(CC) $(CFLAGS) -c main.c

clean:
    rm -f *.o $(EXEC)