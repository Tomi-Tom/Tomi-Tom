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

typedef struct info_s {
    char *name;
    char type;
    int inode;
    int h_link;
    int size;
    int allocated;
    int uid;
    int gid;
} info_t;

typedef struct arg_s {
    char **data;
    char *flags;
} arg_t;

int my_ls(char **files, char *flags);

int display_noflags(char **files);

int parse_flags(char *flags, char c);

#endif /* !MY_LS_H */
