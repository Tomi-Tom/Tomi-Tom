##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## Makefile for the lib my_printf.a
##

all:
		make all -C lib/my/

## ===================[RULE RE]====================

re:			fclean	all
		make re -C lib/my/

## ===================[RULE CLEAN]=================

clean:
		make clean -C lib/my/

## ===================[RULE FCLEAN]================

fclean:		clean
		make fclean -C lib/my/

## ===================[RULE TESTING]===============

tests_run:	re
		make tests_run -C lib/my/

## =======[PHONY]=======

.PHONY:	all	re	clean	fclean	tests_run
