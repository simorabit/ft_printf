
NAME = libftprintf.a
HEADER = ft_printf.h
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c found_conv.c ft_print_hex.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strchr.c ft_print_ptr.c ft_put_uns_nbr.c ft_put_main_str.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c  $(HEADER)
	@$(CC) -c $(CFLAGS) $<
clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
.PHONY: all clean fclean re