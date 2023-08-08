# CC=gcc
# CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRCS = \
ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c    \
ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c     \
ft_strlcat.c ft_strlcpy.c ft_strdup.c  ft_strncmp.c    \
ft_strnstr.c ft_strchr.c  ft_atoi.c    ft_strrchr.c    \
ft_bzero.c   ft_memcmp.c  ft_memcpy.c  ft_memmove.c    \
ft_memset.c  ft_memchr.c  ft_calloc.c  ft_substr.c     \
ft_strjoin.c ft_itoa.c    ft_strtrim.c ft_striteri.c   \
ft_strmapi.c ft_split.c   ft_putchar_fd.c              \
ft_putendl_fd.c           ft_putnbr_fd.c               \
ft_putstr_fd.c  

B_SRCS = \
ft_lstnew_bonus.c

OBJS = $(SRCS:%.c=%.o)

B_OBJS = $(B_SRCS:%.c=%.o)

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -c $(SRCS) -I $(HEADER)
	ar -rc $(NAME) $(OBJS)

bonus : $(B_OBJS)
	ar -rc $(NAME) $(B_OBJS)

clean:
	rm -f $(OBJS) $(B_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re