CC = gcc
CFLAGS = -Wall -Wextra
DESTDIR = /usr/local/bin

perpetual_existence: perpetual_existence.c
	$(CC) $(CFLAGS) -o perpetual_existence perpetual_existence.c

clean:
	rm -f perpetual_existence
