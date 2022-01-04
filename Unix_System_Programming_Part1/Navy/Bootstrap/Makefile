##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

## ===========================================================
## ===========================[VAR]===========================
## ===========================================================

## ==========================[NAMES]==========================

NAME			=			navy

NAME1			=			process_info

NAME2			=			kill_it

NAME3			=			who_sig_me

NAME4			=			signal_me

## ==========================[PATHS]==========================

NAME_TEST		=			unit_test

SRC_PATH1		=			srcs_process_info/

SRC_PATH2		=			srcs_kill_it/

SRC_PATH3		=			srcs_who_sig_me/

SRC_PATH4		=			srcs_signal_me/

## ===========================[SRC]===========================

SRC1			=			$(SRC_PATH1)begin.c

SRC2			=			$(SRC_PATH2)begin.c

SRC3			=			$(SRC_PATH3)begin.c

SRC4			=			$(SRC_PATH4)begin.c

## =========================[OPTIONS]=========================

FLAGS			=			-Wall -Wextra

INC				=			-I include -L lib -lmy

CRIT			=			-lcriterion --coverage

## ===========================================================
## ==========================[RULES]==========================
## ===========================================================

all:		$(NAME)

$(NAME):
		make re -s -C lib/my
		gcc $(FLAGS) -o $(NAME1) main.c $(SRC1) $(INC)
		gcc $(FLAGS) -o $(NAME2) main.c $(SRC2) $(INC)
		gcc $(FLAGS) -o $(NAME3) main.c $(SRC3) $(INC)
		gcc $(FLAGS) -o $(NAME4) main.c $(SRC4) $(INC)

re:			fclean	all

clean:
		make clean -s -C lib/my

fclean:		clean
		make fclean -s -C lib/my
		rm -rf $(NAME1)
		rm -rf $(NAME2)
		rm -rf $(NAME3)
		rm -rf $(NAME4)
		rm -rf $(NAME_TEST)
		rm -rf *gcda
		rm -rf *gcno
tests_run:
		gcc -o $(NAME_TEST) $(SRC) $(SRC_TEST) $(INC) $(CRIT)

## ===========================[END]===========================

.PHONY:	all	re	clean	fclean	tests_run
