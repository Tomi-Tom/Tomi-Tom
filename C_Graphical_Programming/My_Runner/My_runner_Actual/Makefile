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

NAME			=			my_runner

NAME_TEST		=			unit_test

## ==========================[PATHS]==========================

SRC_PATH		=			srcs/

LIB_PATH		=			$(SRC_PATH)lib/

WINDOW_PATH		=			$(SRC_PATH)window/

ANIM_PATH		=			$(SRC_PATH)anim/

INTERACT_PATH	=			$(SRC_PATH)interaction_screen/

INIT_PATH		=			$(SRC_PATH)init_obj/

FREE_PATH		=			$(SRC_PATH)free/

GAME_PATH		=			$(SRC_PATH)game/

## ===========================[SRC]===========================

SRC_GLOBAL		=			main.c								\
							$(SRC_PATH)window.c					\
							$(SRC_PATH)draw.c					\

SRC_LIB			=			$(LIB_PATH)utils.c					\

SRC_WINDOW		=			$(WINDOW_PATH)setup_win.c			\
							$(WINDOW_PATH)utils_win.c			\

SRC_ANIM		=			$(ANIM_PATH)intro.c					\

SRC_INTERACT	=			$(INTERACT_PATH)menu.c				\
							$(INTERACT_PATH)menu_utils.c		\
							$(INTERACT_PATH)menu_utils2.c		\
							$(INTERACT_PATH)pause.c				\

SRC_INIT		=			$(INIT_PATH)init_obj.c				\
							$(INIT_PATH)init_bg.c				\
							$(INIT_PATH)init_menu.c				\
							$(INIT_PATH)init_menu2.c			\
							$(INIT_PATH)init_pause.c			\
							$(INIT_PATH)init_pause2.c			\
							$(INIT_PATH)init_ground.c			\
							$(INIT_PATH)init_heros.c			\
							$(INIT_PATH)init_utils.c			\
							$(INIT_PATH)init_music.c			\

SRC_GAME		=			$(GAME_PATH)game_launch.c			\
							$(GAME_PATH)display_bg.c			\
							$(GAME_PATH)display_ground.c		\
							$(GAME_PATH)display_heros.c			\

SRC_FREE		=			$(FREE_PATH)free_all.c				\

SRC				=			$(SRC_GLOBAL)						\
							$(SRC_LIB)							\
							$(SRC_ANIM)							\
							$(SRC_WINDOW)						\
							$(SRC_INTERACT)						\
							$(SRC_INIT)							\
							$(SRC_FREE)							\
							$(SRC_GAME)							\

## ===========================[OBJ]===========================

OBJ				=			$(SRC:.c=.o)

## ==========================[FLAGS]==========================

CFLAGS			=			-Wall -Wextra ##-Werror -Wpedantic

FLAGS_CSFML		=			-lcsfml-graphics -lcsfml-system \
							-lcsfml-audio -lcsfml-window

## =========================[OPTIONS]=========================

CPPFLAGS		=			-I include

CRIT			=			-lcriterion --coverage

## ===========================================================
## ==========================[RULES]==========================
## ===========================================================

all:
		tar -xf all.tgz medias
		rm -rf all.tgz
		make $(NAME)

$(NAME):	$(OBJ)
		gcc $(CFLAGS) $(FLAGS_CSFML) -o $(NAME) $(OBJ) $(LDFLAGS)


re:			fclean	all

clean:
		rm -rf $(OBJ)

fclean:		clean
		tar -cf all.tgz medias
		rm -rf medias
		rm -rf $(NAME)
		rm -rf $(NAME_TEST)
		rm -rf *gcda
		rm -rf *gcno


tests_run:
	gcc -o $(NAME_TEST) $(SRC) $(SRC_TEST) $(CRIT)


## ===========================[END]===========================

.PHONY:	all	re	clean	fclean	tests_run