##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

## ===========================[VAR]===========================

NAME			=			push_swap

NAME_TEST		=			unit_test

SRC_PATH		=			srcs/

TEST_PATH		=			tests/

SRC				=			$(SRC_PATH)push_swap.c		\
							$(SRC_PATH)linked_list.c	\
							$(SRC_PATH)utils_for_main.c	\

SRC_TEST		=			$(TEST_PATH)tests_linked_list.c

FLAGS			=			-Wall -Wextra

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
	make re -C lib/my
	gcc -o $(NAME_TEST) $(SRC) $(SRC_TEST) $(INC) $(CRIT)
	./$(NAME_TEST)

## ===========================[END]===========================

.PHONY:	all	re	clean	fclean	tests_run
