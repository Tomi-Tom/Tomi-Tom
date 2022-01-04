/*
** EPITECH PROJECT, 2021
** MAIN_C
** File description:
** main
*/

#include "my_ps.h"

int *arg_to_int_array(char **av, int ac)
{
    int *array = malloc(sizeof(int) * (ac - 1));
    int i = 1;

    while (av[i]) {
        array[i - 1] = my_getnbr(av[i]);
        i++;
    }
    return array;
}

void display_int_arr(int *arr, int size)
{
    int i = 0;

    while (i < size) {
        my_put_nbr(arr[i]);
        write(1, " ", 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int *array = arg_to_int_array(av, ac);
    int *brray;

    display_int_arr(array, ac - 1);
    my_putchar('\n');
    array = push_swap(array, ac - 1, brray, 0);
    my_putchar('\n');
    display_int_arr(array, ac - 1);
    free(array);
    return 0;
}