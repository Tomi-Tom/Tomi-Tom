/*
** EPITECH PROJECT, 2021
** my_project_h
** File description:
** my_project_h
*/

#ifndef my_navy_h
    #define my_navy_h

    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include "my.h"
    #include <signal.h>
    #include "structures.h"
    #define POS_FILE_LINE_LEN 8

extern gamestat *status;

void print_tab(tabcase **tab);
tabcase **create_tab(char *file_path);
tabcase **create_empty_tab(void);

int connect(int mode, char **av);
void message(char *mes, int id);
char *postbox(void);

void usr_1(void);
void usr_2(void);

char *my_atob(char c);
char my_btoa(char *b);
int my_str_is_eq(char *str1, char *str2);

int is_valid_pick(char *pick);
int error_handling(int ac, char **av);
int file_verification(char *buffer);

int main_game(tabcase **tab, tabcase **enemy_tab, int mode);

int game_finished(tabcase **game, int is_my_turn);

#endif /* !my_navy_h */
