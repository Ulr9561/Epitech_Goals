CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: prog

prog: sorted_params.o
	$(CC) $(CFLAGS) -o prog sorted_params.o

sorted_params.o: sorted_params.c
	$(CC) $(CFLAGS) -c sorted_params.c

clean:
	rm -f *.o

fclean: clean
	rm -f prog

re: fclean all