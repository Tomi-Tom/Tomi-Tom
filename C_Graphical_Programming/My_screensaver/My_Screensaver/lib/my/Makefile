##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## first makefile
##

## =======================[VAR]=======================

NAME		= libmy.a

FLAG		= -Wall -Wextra -Werror -g

OPT			= -c

SRC			=	my_getnbr.c		\
				my_strdup.c		\
				my_putstr.c

OBJ			= $(SRC:.c=.o)

## ======================[RULES]======================

all:		$(NAME)
		mkdir -p ../../include
		cp my.h ../../include
		cp $(NAME) ..

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

$(OBJ):
		gcc $(FLAG) $(OPT) $(SRC)

re:			fclean	all

clean:
		rm -f *.o
		rm -f libmy.a

fclean:		clean
		rm -f libmy.a
		rm -f ../libmy.a
		rm -f ../../include/my.h

.PHONY:	all	re	clean	fclean
