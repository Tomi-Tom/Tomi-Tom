/*
** EPITECH PROJECT, 2021
** UTILS_C
** File description:
** utils functions
*/

#include "my_ps.h"

int *params_to_arr(int ac, char **av)
{
    int *res = malloc(sizeof(int) * (ac - 1));
    int i = 0;

    while (i < ac - 1) {
        res[i] = my_getnbr(av[i + 1]);
        i++;
    }
    return res;
}

lis_t *arr_to_linked_list(int *arr, int len)
{
    lis_t *list = init_elem(arr[0]);
    int i = 1;

    while (i < len) {
        append_elem(list, arr[i]);
        i++;
    }
    return list;
}
