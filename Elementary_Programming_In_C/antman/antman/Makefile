##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

## ===========================[VAR]===========================

NAME			=			binaire

NAME_TEST		=			unit_test

SRC_PATH		=			srcs/

SRC				=

FLAGS			=			-Wall -Wextra -Werror

INC				=			-I include -L lib -lmy

CRIT			=			-lcriterion --coverage

## ==========================[RULES]==========================

all:		$(NAME)

$(NAME):
		make re -C lib/my
		gcc $(FLAGS) -o $(NAME) main.c $(SRC) $(INC)

re:			fclean	all

clean:
		make clean -C lib/my

fclean:		clean
		make fclean -C lib/my
		rm -rf $(NAME)
		rm -rf $(NAME_TEST)
		rm -rf *gcda
		rm -rf *gcno
tests_run:
	gcc -o $(NAME_TEST) $(SRC) $(SRC_TEST) $(INC) $(CRIT)

## ===========================[END]===========================

.PHONY:	all	re	clean	fclean	tests_run