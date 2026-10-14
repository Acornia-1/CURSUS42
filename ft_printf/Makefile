NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putstr.c ft_putnbr.c ft_puthex.c ft_putptr.c

SRCS_BONUS = ft_utils_bonus.c ft_parse_bonus.c ft_print_str_bonus.c \
	ft_printf_bonus.c ft_print_hex_bonus.c ft_print_nbr_bonus.c \
	ft_print_ptr_bonus.c ft_print_unbr_bonus.c

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
bonus: .bonus

.bonus: $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS) $(BONUS)
	@touch .bonus

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS) .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus