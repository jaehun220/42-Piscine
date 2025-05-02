NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRCS =	srcs/ft_putchar.c\
		srcs/ft_swap.c\
		srcs/ft_putstr.c\
		srcs/ft_strlen.c\
		srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

HEADER = includes/ft.h

all : $(NAME)

$(NAME) : $(OBJS)
	ar -cr $@ $^

%.o:%.c
	$(CC) $(FLAGS) -c $< -I includes -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re