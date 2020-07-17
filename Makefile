##
## EPITECH PROJECT, 2018
## MUL_my_screensaver_2018
## File description:
## Makefile
##

SRC	=	 first_screen.c		\
		my_putstr.c		\
		second_screen.c		\
		my_putchar.c		\
		screen_structure.c	\
		third_screen.c		\
		fourth_screen.c		\
		fifth_screen.c		\
		sixth_screen.c		\
		seventh_screen.c	\
		eighth_screen.c		\
		ninth_screen.c		\
		tenth_screen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_screensaver

CFLAGS	=	-g -g3 -ggdb -I ./include -lm -l c_graph_prog

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
