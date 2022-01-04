##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

# =====================================================
# ========================[VAR]========================
# =====================================================

# =====================[VAR PATHS]=====================

SRC_PATH		=	srcs/

SRC_TESTS_PATH	=	tests/

# =====================[VAR NAMES]=====================

NAME			=	my_ls

NAME_TEST		=	unit_test

# ======================[VAR SRC]======================

SRC				=	$(SRC_PATH)setup_list_f.c		\
					$(SRC_PATH)bubble_sort.c		\
					$(SRC_PATH)display.c			\
					$(SRC_PATH)flag_a.c				\
					$(SRC_PATH)flag_l.c				\
					$(SRC_PATH)flag_l_utils.c		\
					$(SRC_PATH)utils.c				\

SRC_TEST		=

# ======================[VAR OPT]======================

FLAGS			= -Wall -Wextra -g3

INC				= -I include -L lib -lmy

CRIT			= -lcriterion --coverage

# =====================================================
# =======================[RULES]=======================
# =====================================================

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
		gcc $(FLAGS) -o $(NAME_TEST) $(SRC) $(SRC_TEST) $(INC) $(CRIT)

# ========================[END]========================

.PHONY:	all	re	clean	fclean	tests_run
