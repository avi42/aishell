CC = gcc
CFLAGS = -Wall -Wextra
TARGET = myhello
SRC = src/myhello.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)