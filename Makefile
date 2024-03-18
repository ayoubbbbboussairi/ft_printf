
NAME=libftprintf.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC_N = ft_check.c ft_putunsnbr.c ft_putadd.c ft_putchar.c ft_printf.c ft_puthexa.c ft_putnbr.c ft_putstr.c
OBJ_N = $(SRC_N:.c=.o)

all: $(NAME) 

$(NAME): $(OBJ_N)
		ar rc $(NAME) $(OBJ_N)

%.o: %.c ft_printf.h 
		$(CC) -o $@ -c $< $(CFLAGS)

clean:
		$(RM) $(OBJ_N) 

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re 