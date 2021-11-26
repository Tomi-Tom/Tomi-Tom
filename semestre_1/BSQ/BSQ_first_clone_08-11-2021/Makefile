##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE for BSQ
##

NAME		=	bsq

NAME_TEST	=	unit_tests

SRC			=	bsq.c

FLAGS		=	-Wall -Wextra -Werror

CRIT		=	-lcriterion --coverage

INC			=	-I include/ -L lib/ -lmy

all:		$(NAME)

$(NAME):
		make re -C lib/my
		gcc $(FLAGS) -o $(NAME) main.c $(SRC) $(INC)

re:			fclean	all

clean:
		make clean -C lib/my
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
