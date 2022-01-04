/*
** EPITECH PROJECT, 2021
** BUBBLE_SORT_C
** File description:
** do a bubble sort of an array
*/

#include "my_ls.h"

int my_strcmp_time(char const *s1, char const *s2)
{
    struct stat st;
    int t1 = 0;
    int t2 = 0;

    stat(s1, &st);
    t1 = st.st_atime;
    stat(s2, &st);
    t2 = st.st_atime;
    return (t1 - t2);
}

void my_swap_str(char **s1, char **s2)
{
    char *temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int bubble_sort2(char **tab, int i, int err)
{
    while (tab[i]) {
        if (my_strcmp_time(tab[i - 1], tab[i]) > 0) {
            my_swap_str(&tab[i - 1], &tab[i]);
            err++;
        }
        i++;
    }
    return (err);
}

char **bubble_sort(char **tab)
{
    int err = 1;

    while (err > 0) {
        err = 0;
        err = bubble_sort2(tab, 1, err);
    }
    return (tab);
}