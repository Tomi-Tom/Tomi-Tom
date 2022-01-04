##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE for BSQ
##

NAME		=	bsq

NAME_TEST	=	unit_tests

SRC			=	bsq.c	\
				utils.c	\
				main.c

OBJ			=	$(SRC:.c=.o)

CFLAGS		=	-Wall -Wextra -Werror

CRIT		=	-lcriterion --coverage

CPPFLAGS	=	-I include

LDFLAGS		=	-L lib/ -lmy

all:
		make re -C lib/my
		make $(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)

re:			fclean	all

clean:
		make clean -C lib/my
		rm $(OBJ)
		rm -rf *.gcda
		rm -rf *.gcno

fclean:		clean
		make fclean -C lib/my
		rm -rf $(NAME)
		rm -rf $(NAME_TEST)

tests_run:
		gcc $(FLAGS) $(SRC_TEST) -o $(NAME_TEST) $(INC) $(CRIT)
		./$(NAME_TEST)

.PHONY:	all	re	clean	fclean	tests_run
