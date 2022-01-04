/*
** EPITECH PROJECT, 2021
** my_project_h
** File description:
** my_project_h
*/

#ifndef my_ps_h
    #define my_ps_h

    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include "my.h"

typedef struct liste_s
{
    int nb;
    struct liste_s *next;
} liste_t;

int *push_swap(int *a, int lena, int *b, int lenb);

void my_sa(int *n1, int *n2);
int *my_ra(int *arr, int len);

#endif /* !my_ps_h */
