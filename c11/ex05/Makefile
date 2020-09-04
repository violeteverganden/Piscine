CFLAGS = -Wall -Wextra -Werror

NAME = do-op
SRCFILES = main.c utility.c operator.c
OBJECTS = $(SRCFILES:.c=.o)

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
