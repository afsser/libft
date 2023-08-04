# CC=gcc
# CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRCS = \
ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c  \
ft_strlcat.c ft_strlcpy.c ft_strdup.c  ft_strncmp.c \
ft_strnstr.c ft_strchr.c  ft_atoi.c    ft_strrchr.c \
ft_bzero.c   ft_memcmp.c  ft_memcpy.c  ft_memmove.c \
ft_memset.c  ft_memchr.c  ft_calloc.c  ft_substr.c  \
ft_strjoin.c ft_itoa.c    ft_strtrim.c ft_striteri.c\
ft_strmapi.c ft_putchar_fd.c      

OBJS = $(SRCS:%.c=%.o)
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -c $(SRCS) -I $(HEADER)
	ar -rc $(NAME) $(OBJS)

# $(NAME): $(OBJS)
# 	ar -rcs $(NAME) $(OBJS)

# %.o: %.c $(HEADER)
# 		$(CC) $(CFLAGS) -c $< -o $@ -I .

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re