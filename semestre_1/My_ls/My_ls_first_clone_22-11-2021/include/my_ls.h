/*
** EPITECH PROJECT, 2021
** MY_LS_H
** File description:
** MY_LS_H
*/

#ifndef MY_LS_H
    #define MY_LS_H

    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>

    #include <sys/types.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <dirent.h>

    #include "my.h"

int my_dir_list_len(char *flags);
char **dirarg_list(char *flags);
char **bubble_sort(char **tab);
void my_swap_str(char *s1, char *s2);

int is_flag(char c, char *str);
void display(char **list_f, char *flags);

#endif /* !MY_LS_H */
