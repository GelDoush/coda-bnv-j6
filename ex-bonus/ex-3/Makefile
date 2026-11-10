NAME = exercice_bonus_3

CFLAGS = -Wall -Wextra -O2

SRCS = main.c \
       revert_words.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean: 
	rm -f $(NAME)

re: fclean all
