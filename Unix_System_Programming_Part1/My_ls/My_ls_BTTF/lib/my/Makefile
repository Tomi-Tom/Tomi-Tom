##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## first makefile
##

NAME		= libmy.a

FLAG		= -Wall -Wextra -Werror -g

OPT			= -c

SRC			=	my_putstr.c				\
				my_strlen.c				\
				my_strcpy.c				\
				my_strcmp.c				\
				my_swap.c				\
				my_strdup.c				\
				my_strlowcase.c			\
				my_strupcase.c			\
				my_put_nbr.c			\
				my_show_word_array.c	\
				my_strcat.c				\

OBJ			= $(SRC:.c=.o)


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
