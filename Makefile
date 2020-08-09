CC=gcc
STD=-std=gnu99
BIN=educational.bin
FLAG=-Wall -Werror
OBJ=main.o head_master.o teacher.o student.o fileraw.o interface_display.o tools.o

all:$(OBJ)
	$(CC) -o $(BIN) $(OBJ)

main.o:main.c head_master.h teacher.h student.h interface_display.h
	$(CC) $(STD) $(FLAG) -c main.c
head_master.o:head_master.c head_master.h interface_display.h fileraw.h tools.h
	$(CC) $(STD) $(FLAG) -c head_master.c
teacher.o:teacher.c teacher.h fileraw.h interface_display.h tools.h
	$(CC) $(STD) $(FLAG) -c teacher.c
student.o:student.c student.h fileraw.h interface_display.h tools.h
	$(CC) $(STD) $(FLAG) -c student.c
fileraw.o:fileraw.c fileraw.h
	$(CC) $(STD) $(FLAG) -c fileraw.c
interface_display.o:interface_display.c interface_display.h
	$(CC) $(STD) $(FLAG) -c interface_display.c
tools.o:tools.c tools.h
	$(CC) $(STD) $(FLAG) -c tools.c
	
clean:
	rm -rf $(BIN) $(OBJ)
