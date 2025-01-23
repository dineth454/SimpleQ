CC = gcc
CFLAGS = -Wall -Wextra -I./src

SRC = src/queue.c
TEST_SRC = test/test_queue.c test/unity.c
TARGET = test_simpleq

all: $(TARGET)

$(TARGET): $(SRC) $(TEST_SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)