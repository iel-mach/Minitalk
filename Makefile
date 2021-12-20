SRC = client.c ft_atoi.c
SRC1 = server.c  ft_putnbr.c
all: server client

server: $(SRC1)
	@cc -Wall -Wextra -Werror  $(SRC1) -o server

client: $(SRC)
	@cc -Wall -Wextra -Werror $(SRC) -o client

clean:
	@rm -f server client

fclean: clean

re: fclean all