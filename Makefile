# CC=gcc
# CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRC = \
ft_isdigit ft_isalpha ft_isalnum ft_isascii    \
ft_isprint ft_toupper ft_tolower ft_strlen     \
ft_strlcat ft_strlcpy ft_strdup  ft_strncmp    \
ft_strnstr ft_strchr  ft_atoi    ft_strrchr    \
ft_bzero   ft_memcmp  ft_memcpy  ft_memmove    \
ft_memset  ft_memchr  ft_calloc  ft_substr     \
ft_strjoin ft_itoa    ft_strtrim ft_striteri   \
ft_strmapi ft_split   ft_putchar_fd            \
ft_putendl_fd         ft_putnbr_fd             \
ft_putstr_fd  

B_SRC = \
ft_lstnew	ft_lstadd_front 	ft_lstsize     \
ft_lstlast	ft_lstadd_back

SRCS		= $(addsuffix .c, ${SRC})

B_SRCS		= $(addsuffix _bonus.c, ${B_SRC})

OBJS = $(SRCS:%.c=%.o)

B_OBJS = $(B_SRCS:%.c=%.o)

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)

bonus : $(B_OBJS) $(HEADER)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 
	ar -rc $(NAME) $@

clean:
	rm -f $(OBJS) $(B_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re