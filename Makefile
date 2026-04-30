NAME	= libftprintf.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
SRCS    = ft_printf_putchar.c\
		  ft_printf_putnbr.c\
		  ft_printf_putstr.c\
		  ft_printf_putptr.c\
		  ft_printf_unsigned.c\
		  ft_printf_hex.c\
		  ft_printf.c\

OBJS	= $(SRCS:.c=.o)

all: $(NAME) $(OBJS)
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re