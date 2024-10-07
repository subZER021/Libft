NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
DEBUG = -g3 -fsanitize=address

SRCS = ft_strlen.c #ft_strlcpy.c ft_strlcat.c
BIN = bin
OBJS = $(addprefix ${BIN}/, ${SRCS:%.c=%.o})

$(shell mkdir -p $(BIN))

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^

${BIN}/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BIN) $(NAME)

fclean: clean

debug: CFLAGS += $(DEBUG)
debug: re

re: fclean all

.PHONY: all re clean fclean debug
