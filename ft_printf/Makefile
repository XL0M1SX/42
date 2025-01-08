NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = ft_printf.c ft_printf_utils.c ft_print_hex.c ft_print_ptr.c ft_print_unsigned.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

test: $(NAME)
	$(CC) $(CFLAGS) test.c $(NAME) -o test_printf

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) test_printf

re: fclean all

.PHONY: all clean fclean re test

# NAME = libftprintf.a
# CC = gcc
# CFLAGS = -Wall -Wextra -Werror
# RM = rm -f

# SRCS = ft_printf.c ft_printf_utils.c ft_print_hex.c ft_print_ptr.c ft_print_unsigned.c

# OBJS = $(SRCS:.c=.o)

# all: $(NAME)

# $(NAME): $(OBJS)
# 	ar rcs $(NAME) $(OBJS)

# clean:
# 	$(RM) $(OBJS)

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean all

# .PHONY: all clean fclean re