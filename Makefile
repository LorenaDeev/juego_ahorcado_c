CC = gcc
CFLAGS = -Wall
TARGET = ahorcado
OBJS = main.o ahorcado.o


all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)


main.o: main.c ahorcado.h
	$(CC) $(CFLAGS) -c main.c

ahorcado.o: ahorcado.c ahorcado.h
	$(CC) $(CFLAGS) -c ahorcado.c


clean:
	del /f $(OBJS) $(TARGET).exe