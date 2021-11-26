/*
** EPITECH PROJECT, 2021
** 101PONG_H
** File description:
** 101PONG_H
*/

#ifndef PONG_H
#define PONG_H

    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <math.h>
    #include <string.h>

typedef struct vector_s
{
    float x;
    float y;
    float z;
} vector_t;

typedef struct pos_s
{
    float x;
    float y;
    float z;
} pos_t;

typedef struct ang_s
{
    float x;
    float y;
    float z;
} ang_t;

int flags(char *str);
void pong(char **arg);
int my_getnbr(char const *str);

pos_t init_pos(char **av, int p);
vector_t init_vector(pos_t p1, pos_t p2);

#endif /* PONG_H */
