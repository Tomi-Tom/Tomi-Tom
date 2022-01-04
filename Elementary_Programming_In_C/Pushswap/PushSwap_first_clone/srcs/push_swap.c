/*
** EPITECH PROJECT, 2021
** PUSH_SWAP_C
** File description:
** functions for push swap
*/

#include "my_ps.h"

int check_min(int *arr, int len)
{
    int i = 0;

    while (i < len) {
        if (arr[i] < arr[0])
            return 0;
    }
    return 1;
}

int *push_swap(int *a, int lena, int *b, int lenb)
{
    int i = 0;

    while (i < lena) {
        if (check_min(a) != a) {
            my_ra(a, lena);
        } else {
            my_pa(a, lena, b, lenb);
            i++;
        }
    }
    return a;
}