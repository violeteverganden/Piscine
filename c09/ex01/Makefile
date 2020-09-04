CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCFILE = \
srcs/ft_putchar.c	\
srcs/ft_swap.c	\
srcs/ft_putstr.c	\
srcs/ft_strlen.c	\
srcs/ft_strcmp.c

OBJFILE = $(SRCFILE:.c=.o)
INCDIR = includes

$(NAME): $(OBJFILE)
	ar -cr $(NAME) $(OBJFILE)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@ -I $(INCDIR)

clean:
	rm -f $(OBJFILE)

fclean: clean
	rm -f $(NAME)

re: fclean all
