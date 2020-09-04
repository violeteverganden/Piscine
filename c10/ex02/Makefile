CFLAGS = -Wall -Wextra -Werror

NAME = ft_tail
SRCFILES = main.c
OBJECTS = main.o

all: $(NAME)

$(NAME): $(OBJECTS)
	gcc $(CFLAGS) $^ -o $@

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
