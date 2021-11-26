/*
** EPITECH PROJECT, 2021
** FLAGS_C
** File description:
** FLAGS_C
*/

#include "101pong.h"

int flags(char *str)
{
    if (!(strcmp(str, "-h"))) {
        printf("USAGE\n");
        printf("\t./101pong x0 y0 z0 x1 y1 z1 n\n");
        printf("DESCRIPTION\n");
        printf("\tx0 ball abscissa at time t - 1\n");
        printf("\ty0 ball ordinate at time t - 1\n");
        printf("\tz0 ball altitude at time t - 1\n");
        printf("\tx1 ball abscissa at time t\n");
        printf("\ty1 ball ordinate at time t\n");
        printf("\tz1 ball altitude at time t\n");
        printf("\tn time shift (greater than or equal to zero, integer)\n");
        return 1;
    }
    return 0;
}