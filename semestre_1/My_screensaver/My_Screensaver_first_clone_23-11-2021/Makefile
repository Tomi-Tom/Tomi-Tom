##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

NAME		=	my_screensaver

SRC_PATH	=	sources/

SRC			=	$(SRC_PATH)window.c	\
				$(SRC_PATH)utils.c	\
				$(SRC_PATH)utils2.c	\
				$(SRC_PATH)utils3.c	\
				$(SRC_PATH)utils4.c	\
				$(SRC_PATH)anim1.c	\
				$(SRC_PATH)anim2.c	\
				$(SRC_PATH)anim3.c	\
				$(SRC_PATH)anim4.c	\
				$(SRC_PATH)anim5.c	\
				$(SRC_PATH)anim6.c	\

INC			=	-I include -L lib -lmy

FLAGS		=	-Wall -Wextra -Werror

FLAGS_CSFML	=	-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all:	$(NAME)

$(NAME):
		make re -C lib/my
		gcc $(FLAGS) $(FLAGS_CSFML) -o $(NAME) main.c $(SRC) $(INC)

re:	fclean	all

clean:
		make clean -C lib/my

fclean:
		make fclean -C lib/my
		rm -rf $(NAME)

.PHONY:	all	re	clean	fclean
