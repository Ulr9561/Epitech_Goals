CC = gcc
CFLAGS = -Wall -Werror -Wextra -I../../Day\ 03/includes
LDFLAGS = -L../../Day\ 03/lib/phoenix -lphoenix

all: concat_parameters

concat_parameters: concat_parameters.o main.o
	$(CC) $(CFLAGS) -o concat_parameters concat_parameters.o main.o $(LDFLAGS)

concat_parameters.o: concat_parameters.c
	$(CC) $(CFLAGS) -c concat_parameters.c

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -rf *.o

fclean: clean
	rm -rf concat_parameters

re: fclean all