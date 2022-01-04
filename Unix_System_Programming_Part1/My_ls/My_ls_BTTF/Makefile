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

MAIN			=	main.c

SRC				=	my_ls.c			\
					my_ls_nof.c		\
					utils.c			\

SRC_F			= $(addprefix $(SRC_PATH), $(SRC))

SRC_GLOBAL		=	$(SRC_F)		\
					$(MAIN)			\

SRC_TEST		=

OBJ				=	$(SRC_GLOBAL:.c=.o)

# ======================[VAR OPT]======================

FLAGS			=	-Wall -Wextra -Wpedantic -Werror

CPPFLAGS		=	-I include

LDFLAGS			=	-L lib -lmy

CRIT			=	-lcriterion --coverage

# =====================================================
# =======================[RULES]=======================
# =====================================================

all:
		make re -C lib/my
		make $(NAME)

$(NAME):	$(OBJ)
		gcc $(FLAGS) -o $(NAME) $(OBJ) $(LDFLAGS)

re:			fclean	all

clean:
		make clean -C lib/my
		rm -rf $(OBJ)
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
