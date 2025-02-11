all: program1.out program2.out program3.out program4.out

program1.out: program1.o safeint.o
    gcc -Wall -pedantic -o program1.out program1.o safeint.o

program2.out: program2.o safeint.o
    gcc -Wall -pedantic -o program2.out program2.o safeint.o

program3.out: program3.o safeint.o
    gcc -Wall -pedantic -o program3.out program3.o safeint.o

program4.out: program4.o safeint.o
    gcc -Wall -pedantic -o program4.out program4.o safeint.o

program1.o: program1.c
    gcc -Wall -pedantic -c -o program1.o program1.c

program2.o: program2.c
    gcc -Wall -pedantic -c -o program2.o program2.c

program3.o: program3.c
    gcc -Wall -pedantic -c -o program3.o program3.c

program4.o: program4.c
    gcc -Wall -pedantic -c -o program4.o program4.c

safeint.o: safeint.c
    gcc -Wall -pedantic -c -o safeint.o safeint.c

clean:
    rm -f *.o *.out

.PHONY: all clean