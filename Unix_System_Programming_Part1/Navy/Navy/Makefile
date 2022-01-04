##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

## ===========================[VAR]===========================

NAME			=			navy

NAME_TEST		=			unit_test

SRC_PATH		=			srcs/

TEST_PATH		=			tests/

SRC				=			main.c								\
							$(SRC_PATH)comunication.c			\
							$(SRC_PATH)comunication2.c			\
							$(SRC_PATH)handler.c				\
							$(SRC_PATH)connect.c				\
							$(SRC_PATH)base_boat.c				\
							$(SRC_PATH)game.c					\
							$(SRC_PATH)utils.c					\
							$(SRC_PATH)endgame.c				\

SRC_TEST		=			$(SRC_PATH)comunication.c			\
							$(SRC_PATH)utils.c					\
							$(TEST_PATH)test_my_atob.c			\
							$(TEST_PATH)test_my_btoa.c			\
							$(TEST_PATH)test_my_str_is_eq.c		\
							$(TEST_PATH)test_is_valid_pick.c	\

OBJ				=			$(SRC:.c=.o)

FLAGS			=			-Wall -Wextra ##-Werror -Wpedantic

CPPFLAGS		=			-I include

LDFLAGS			=			-L lib -lmy

CRIT			=			-lcriterion --coverage

## ==========================[RULES]==========================

all:
		make re -C lib/my
		make $(NAME)

$(NAME):	$(OBJ)
		gcc $(FLAGS) -o $(NAME) $(OBJ) $(LDFLAGS)

re:			fclean	all

clean:
		rm -rf $(OBJ)
		make clean -C lib/my

fclean:		clean
		make fclean -C lib/my
		rm -rf $(NAME)
		rm -rf $(NAME_TEST)
		rm -rf *gcda
		rm -rf *gcno

tests_run:	fclean	all
	gcc -o $(NAME_TEST) $(SRC_TEST) -I include $(LDFLAGS) $(CRIT)
	./$(NAME_TEST)

## ===========================[END]===========================

.PHONY:	all	re	clean	fclean	tests_run
