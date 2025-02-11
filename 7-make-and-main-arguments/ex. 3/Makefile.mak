CC = gcc
CFLAGS = -Wall
OBJ = mystrings.o

all: strlength.exe strconcat.exe strcompare.exe

strlength.exe: strlength.c $(OBJ)
    $(CC) $(CFLAGS) -o strlength.exe strlength.c $(OBJ)

strconcat.exe: strconcat.c $(OBJ)
    $(CC) $(CFLAGS) -o strconcat.exe strconcat.c $(OBJ)

strcompare.exe: strcompare.c $(OBJ)
    $(CC) $(CFLAGS) -o strcompare.exe strcompare.c $(OBJ)

mystrings.o: mystrings.c mystrings.h
    $(CC) $(CFLAGS) -c mystrings.c

clean:
    rm -f *.o *.exe