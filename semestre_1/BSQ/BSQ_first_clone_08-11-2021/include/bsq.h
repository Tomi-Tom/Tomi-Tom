/*
** EPITECH PROJECT, 2021
** BSQ_H
** File description:
** the main .h for the bsq to include everywhere
*/

#ifndef BSQ_H_
    #define BSQ_H_

    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include "my.h"

typedef struct data_s
{
    int x;
    int y;
    int size;
} data_t;

typedef struct mapsize_s
{
    int xmax;
    int ymax;
} mapsize_t;

void bsq(char **map);

#endif
