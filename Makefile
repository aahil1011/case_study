CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = Fullcode

.PHONY: all clean

all: $(TARGET)

$(TARGET): Fullcode.o
	$(CC) $(CFLAGS) -o $@ $^

shopping_cart.o: Fullcode.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(TARGET) *.

