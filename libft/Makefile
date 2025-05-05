NAME= libft.a

SRC= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c ft_atoi.c ft_strncmp.c ft_memset.c ft_strdup.c
OBJ= $(SRC:.c=.o)

CC= gcc
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
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
