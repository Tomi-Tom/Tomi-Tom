##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## Makefile for the lib my_printf.a
##

## =========================[ALL NAME VAR]=========================

NAME			=	libmy.a

NAME_TEST		=	unit_test

## =========================[ALL PATH VAR]=========================

SRC_PATH		=	sources/

SRC_LIB_PATH	=	my_libc/

INC_PATH		=	includes/

SRC_TEST_PATH	=	tests/

## =========================[ALL SRCS VAR]=========================

SRC				=	$(SRC_PATH)disp_stdarg.c			\
					$(SRC_PATH)my_printf.c

SRC_LIB			=	$(SRC_LIB_PATH)my_strlen.c			\
					$(SRC_LIB_PATH)my_putchar.c			\
					$(SRC_LIB_PATH)my_putstr.c			\
					$(SRC_LIB_PATH)my_put_nbr.c			\
					$(SRC_LIB_PATH)my_put_nbr_u.c		\
					$(SRC_LIB_PATH)my_put_nbr_l.c		\
					$(SRC_LIB_PATH)my_put_nbr_ll.c		\
					$(SRC_LIB_PATH)my_put_nbr_base.c	\
					$(SRC_LIB_PATH)my_put_ptr.c

SRC_TEST		=	$(SRC_TEST_PATH)tests_printf.c

## =========================[ALL INCS VAR]=========================

INC				=	-I includes -L lib/ -lmy

INC_OBJ			=	-I includes

## =========================[ALL OBJS VAR]=========================

OBJ				=	disp_stdarg.o		\
					my_printf.o

OBJ_LIB			=	my_strlen.o			\
					my_putchar.o		\
					my_putstr.o			\
					my_put_nbr.o		\
					my_put_nbr_u.o		\
					my_put_nbr_l.o		\
					my_put_nbr_ll.o		\
					my_put_nbr_base.o	\
					my_put_ptr.o

## =========================[ALL FLAGS VAR]=========================

FLAGS			=	-Wall -Wextra -Werror

## =================================================================
## ===========================[ALL RULES]===========================
## =================================================================

## ===================[RULE ALL]===================

all:		$(NAME)
		mkdir -p ../../includes
		cp -rf $(NAME) ..
		cp -rf $(NAME) ../..
		cp -rf includes/my_printf.h ../../includes

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ) $(OBJ_LIB)
		mkdir -p tmp
		mv $(OBJ) $(OBJ_LIB) tmp

$(OBJ):
		gcc $(FLAGS) -c $(SRC) $(SRC_LIB) $(INC_OBJ)

## ===================[RULE RE]====================

re:			fclean	all

## ===================[RULE CLEAN]=================

clean:
		rm -rf *.o
		rm -rf tmp
		rm -rf *.gcda
		rm -rf *.gcno
		rm -rf $(INC_PATH)*.gch

## ===================[RULE FCLEAN]================

fclean:		clean
		rm -rf $(NAME)
		rm -rf $(NAME_TEST)
		rm -rf ../$(NAME)
		rm -rf ../../$(NAME)
		rm -rf ../../$(INC_PATH)

## ===================[RULE TESTING]===============

tests_run:	re
		gcc $(FLAGS) -o $(NAME_TEST) $(SRC) $(SRC_TEST) $(INC) $(CRIT)

test:	re
		gcc $(FLAGS) -o $(NAME_TEST) main.c $(INC)

## =======[PHONY]=======

.PHONY:	all	re	clean	fclean	tests_run
