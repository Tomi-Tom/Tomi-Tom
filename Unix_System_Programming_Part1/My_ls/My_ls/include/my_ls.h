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

    #include <fcntl.h>
    #include <time.h>

    #include <sys/types.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <dirent.h>
    #include <sys/types.h>
    #include <pwd.h>
    #include <grp.h>

    #include "my.h"

typedef struct info_s
{
    char type;
} info_t;

int flags_len(int ac, char **av);
char *parse_flags(int ac, char **av);
int my_len_nbfiles(int ac, char **av);
char **find_files(int ac, char **av);

int my_dir_list_len(char *flags, char *file);
char **dirarg_list(char *flags, char *file);
char **bubble_sort(char **tab);
void my_swap_str(char **s1, char **s2);

void my_put_info_file(void);

int is_flag(char c, char *str);
void display(char **list_f, char *flags, char *file);

void display_format(char **files, char *name, int oui, char *flags);

void display_without_flags(char **list_f, char *flags, char *file);
void display_flag_a(char **list_f, char *flags, char *file);
void display_flag_l(char **list_f, char *flags, char *file);

void display_link(char *file);
void display_grp_usr_name(char *file);
void display_time(char *file);
void display_auth(char *file);
void display_size(char *file);

#endif /* !MY_LS_H */
