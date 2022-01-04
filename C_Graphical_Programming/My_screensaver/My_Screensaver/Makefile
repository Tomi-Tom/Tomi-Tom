##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

## ===================================================
## =======================[VAR]=======================
## ===================================================

## ======================[NAMES]======================

NAME		=	my_screensaver

NAME_BONUS	=	my_bonussaver

## ======================[PATHS]======================

SRC_PATH	=	sources/

ANIM_PATH	=	animations/

BONUS_PATH	=	bonus/

## =======================[SRC]=======================

SRC	=	$(SRC_PATH)window.c					\
		$(SRC_PATH)utils.c					\
		$(SRC_PATH)options.c				\
		$(SRC_PATH)draw.c					\
		$(SRC_PATH)color.c					\
		$(SRC_PATH)setup.c					\
		$(SRC_PATH)clean_fb.c				\
		$(SRC_PATH)black.c					\
		$(SRC_PATH)$(ANIM_PATH)anim1.c		\
		$(SRC_PATH)$(ANIM_PATH)anim2.c		\
		$(SRC_PATH)$(ANIM_PATH)anim3.c		\
		$(SRC_PATH)$(ANIM_PATH)anim4.c		\
		$(SRC_PATH)$(ANIM_PATH)anim5.c		\

SRC_BONUS	=	$(BONUS_PATH)window.c					\
				$(BONUS_PATH)utils.c					\
				$(BONUS_PATH)options.c					\
				$(BONUS_PATH)draw.c						\
				$(BONUS_PATH)color.c					\
				$(BONUS_PATH)setup.c					\
				$(BONUS_PATH)clean_fb.c					\
				$(BONUS_PATH)black.c					\
				$(BONUS_PATH)$(ANIM_PATH)anim1.c		\
				$(BONUS_PATH)$(ANIM_PATH)anim2.c		\
				$(BONUS_PATH)$(ANIM_PATH)anim3.c		\
				$(BONUS_PATH)$(ANIM_PATH)anim4.c		\
				$(BONUS_PATH)$(ANIM_PATH)anim5.c		\
				$(BONUS_PATH)$(ANIM_PATH)anim6.c		\

## =====================[OPTIONS]=======================

INC			=	-I include -L lib -lmy

FLAGS		=	-Wall -Wextra -g

FLAGS_CSFML	=	-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

## ===================================================
## ======================[RULES]======================
## ===================================================

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
		rm -rf $(NAME_BONUS)

bonus:	fclean $(NAME_BONUS)

$(NAME_BONUS):
		make re -C lib/my
		gcc $(FLAGS) $(FLAGS_CSFML) -o $(NAME_BONUS) main.c $(SRC_BONUS) $(INC)

## =======================[END]=======================

.PHONY:	all	re	clean	fclean	bonus
