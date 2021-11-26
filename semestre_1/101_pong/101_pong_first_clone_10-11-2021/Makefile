##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

NAME		=	101pong

NAME_TEST	=	unit_test

SRC			=	flags.c		\
				pong.c		\

SRC_TEST_PATH	=	tests/

SRC_TEST	=	$(SRC_TEST_PATH)tests_101pong.c		\

FLAGS		=	-Wall -Wextra

INC			=	-I includes/ -lm

CRIT		=	-lcriterion	--coverage

all:		$(NAME)

$(NAME):
		gcc $(FLAGS) -o $(NAME) main.c $(SRC) $(INC)

re:			fclean	all

clean:
		rm -rf *.gcda 
		rm -rf *.gcno

fclean:		clean
		rm -rf $(NAME)
		rm -rf $(NAME_TEST)

tests_run:
		gcc $(FLAGS) -o $(NAME_TEST) $(SRC_TEST) $(SRC) $(INC) $(CRIT)
		./$(NAME)

.PHONY:	all	re	clean	fclean	tests_run
