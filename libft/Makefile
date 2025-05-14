NAME= libft.a

SRC= ft_strtrim.c ft_strjoin.c ft_substr.c ft_calloc.c ft_strlcat.c ft_strlcpy.c ft_memmove.c  ft_memcpy.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strrchr.c ft_putnbr_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_strchr.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c ft_atoi.c ft_strncmp.c ft_memset.c ft_strdup.c
OBJ= $(SRC:.c=.o)

CC= clang
CFLAGS= -Wall -Wextra -Werror

AR= ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) $(TEST)

re: fclean all

.PHONY: all clean fclean re
