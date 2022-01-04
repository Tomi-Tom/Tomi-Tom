##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## first makefile
##

NAME = libmy.a

FLAG = -Wall -Wextra

OPT = -c

SRC = *.c

OBJ = $(SRC:.c=.o)


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
