/*
** EPITECH PROJECT, 2021
** BUBBLE_SORT_C
** File description:
** do a bubble sort of an array
*/

#include "my_ls.h"

void my_swap_str(char *s1, char *s2)
{
    char *tmp1 = my_strdup(s1);
    char *tmp2 = my_strdup(s2);

    free(s1);
    free(s2);
    s1 = my_strdup(tmp1);
    s2 = my_strdup(tmp2);
}

int bubble_sort2(char **tab, int i, int err)
{
    while (tab[i]) {
        if (my_strcmp_nsens(tab[i - 1], tab[i]) > 0) {
            my_swap_str(tab[i - 1], tab[i]);
            err++;            }
        i++;
    }
    return (err);
}

char **bubble_sort(char **tab)
{
    int i = 1;
    int err = 1;

    while (err > 0) {
        err = 0;
        err = bubble_sort2(tab, i, err);
        i = 1;
    }
    return (tab);
}