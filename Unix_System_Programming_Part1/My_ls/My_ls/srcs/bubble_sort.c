/*
** EPITECH PROJECT, 2021
** BUBBLE_SORT_C
** File description:
** do a bubble sort of an array
*/

#include "my_ls.h"

void my_swap_str(char **s1, char **s2)
{
    char *temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int bubble_sort2(char **tab, int i, int err)
{
    while (tab[i]) {
        if (my_strcmp_nsens(tab[i - 1], tab[i]) > 0) {
            my_swap_str(&tab[i - 1], &tab[i]);
            err++;
        }
        i++;
    }
    return (err);
}

char **bubble_sort(char **tab)
{
    int i = 1;
    int err = 1;
    int test = 0;

    while (tab[test])
        test++;
    test = 0;
    while (err > 0) {
        err = 0;
        err = bubble_sort2(tab, i, err);
        while (tab[test]) {
        test++;
        }
        test = 0;
        i = 1;
    }
    while (tab[test])
        test++;
    return (tab);
}