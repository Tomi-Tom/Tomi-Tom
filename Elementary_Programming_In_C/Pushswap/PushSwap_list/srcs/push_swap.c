/*
** EPITECH PROJECT, 2021
** PUSH_SWAP_C
** File description:
** functions for push swap
*/

#include "my_ps.h"

void my_sa(lis_t *l, int i)
{
    int tmp;

    tmp = l->nb;
    l->nb = l->next->nb;
    l->next->nb = tmp;
    my_putstr(i == 0 ? "sa" : " sa");
}

void my_ra(lis_t *l_a, int i)
{
    append_elem(l_a, l_a->nb);
    l_a->nb = l_a->next->nb;
    *l_a = *l_a->next;
    my_putstr(i == 0 ? "ra" : " ra");
}

void operation(lis_t *l_a)
{
    static int i = 0;

    if (l_a->nb > l_a->next->nb) {
        my_sa(l_a, i);
        my_ra(l_a, 1);
    } else {
        my_ra(l_a, i);
    }
    i = 1;
}

void push_swap(lis_t *l_a)
{
    int len = len_list(l_a);
    int i = 0;

    while (list_is_sorted(l_a) == 0) {
        i = 0;
        while (i < len - 1) {
            operation(l_a);
            i++;
        }
        my_ra(l_a, 1);
    }
}
