CC = gcc
CFLSGS = -W -Wall
TARGET = manager
OBJECTS = menu.o user.o main.o
D_OBJECTS = menu_d.o user_d.o main_d.o

all : $(TARGET)

manager_debug : $(D_OBJECTS)
	$(cc) $(CFLAGS) -o $@ $(D_OBJECTS)

$(TARGET)   : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
	
user.o	: user.c
	$(CC) -DDBUG_MODE $(CFLAGS) -c -o $@ $^

menu.o	: menu.c
	$(CC) -DDBUG_MODE $(CFLAGS) -c -o $@ $^

main.o	: main.c
	$(CC) -DDBUG_MODE $(CFLAGS) -c -o $@ $^

clean	:
	rm *.o manager manager_debug
