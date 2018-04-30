NAME = fillit

SDIR =
SRCS =	main.c				\
		parser.c			\
		check_piece.c		\
		create_piece_list.c	\
		solver.c			\
		tools.c				\
		functions1.c		\
		functions2.c		\
		functions3.c		\
		functions4.c

OBJS = $(SRCS:%.c=%.o)
INCL = -I includes/

CFLAGS = -Wall -Wextra -Werror
CC = gcc $(CFLAGS) $(INCL) 

.PHONY:	all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $@ $? $(CFLAGS)

%.o: $(SDIR)%.c $(INCL)
	$(CC) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all