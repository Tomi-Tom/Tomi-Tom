/*
** EPITECH PROJECT, 2021
** OPERATION_C
** File description:
** functions for operations
*/

#include "my_ps.h"

void my_pb(int *a, int lena, int *b, int lenb)
{
    static int add;
    int i = 0;

    add++;
    b = malloc(sizeof(int) * lenb + add);
    while (lenb + add > 0) {
        b[lenb + add] = b[lenb + add - 1];
        lenb--;
    }
}

void my_sa(int *n1, int *n2)
{
    int tmp;

    tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
    my_putstr("sa");
}

int *my_ra(int *arr, int len)
{
    int *tmp = malloc(sizeof(int) * len);
    int i = 1;

    while (i < len) {
        tmp[i - 1] = arr[i];
        i++;
    }
    tmp[len - 1] = arr[0];
    my_putstr("ra");
    return tmp;
}