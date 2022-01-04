/*
** EPITECH PROJECT, 2021
** MAIN_C
** File description:
** main
*/

#include "my_ps.h"

void free_lis(lis_t *l)
{
    if (l->next != NULL) {
        free_lis(l->next);
    }
    free(l);
}

int main(int ac, char **av)
{
    int *arr = params_to_arr(ac, av);
    lis_t *l_a = arr_to_linked_list(arr, ac - 1);

    if (ac <= 2 || list_is_sorted(l_a)) {
        my_putchar('\n');
        return 0;
    }
    push_swap(l_a);
    free(arr);
    free_lis(l_a);
    my_putchar('\n');
    return 0;
}
