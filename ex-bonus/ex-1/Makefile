NAME = exercice_bonus_1

CFLAGS = -Wall -Wextra -O2

SRCS = main.c \
       swap_ptr.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean: 
	rm -f $(NAME)

re: fclean all
