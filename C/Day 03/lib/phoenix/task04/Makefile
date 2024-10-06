CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: prog

prog: show_params.o
	$(CC) $(CFLAGS) -o prog show_params.o

show_params.o: show_params.c
	$(CC) $(CFLAGS) -c show_params.c

clean:
	rm -f *.o

fclean:
	rm -f prog

re:
	fclean all
