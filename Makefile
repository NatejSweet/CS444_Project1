CC = gcc
CFLAGS = -Wall -Wextra -Werror -pthread

TARGET = hellothread
SRC = hellothread.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)
