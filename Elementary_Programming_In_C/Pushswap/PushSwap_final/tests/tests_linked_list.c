/*
** EPITECH PROJECT, 2021
** TESTS_LINKED_LIST_C
** File description:
** unit tests for linked list
*/

#include "criterion/criterion.h"
#include "my_ps.h"

Test (len_list, simple_test)
{
    int arr[] = {1, 2, 3, 4, 5};
    lis_t *l = arr_to_linked_list(arr, 5);

    cr_assert_eq(len_list(l), 5);
}

Test (params_to_arr, simple_test)
{
    char **tab = my_str_to_word_array("10 84 103 12");
    int *arr = params_to_arr(4, tab);

    cr_assert_eq(arr[1], 103);
}

Test (arr_to_linked_list, simple_test)
{
    int arr[] = {1, 2, 3, 4, 5};
    lis_t *l = arr_to_linked_list(arr, 5);

    cr_assert_eq(l->next->nb, 2);
}

Test (list_is_sorted, simple_test_true)
{
    int arr[] = {1, 2, 3, 4, 5};
    lis_t *l = arr_to_linked_list(arr, 5);

    cr_assert_eq(list_is_sorted(l), 1);
}

Test (list_is_sorted, simple_test_false)
{
    int arr[] = {1, 3, 2, 5, 4};
    lis_t *l = arr_to_linked_list(arr, 5);

    cr_assert_eq(list_is_sorted(l), 0);
}

Test (my_sa, simple_test)
{
    int arr[] = {2, 1, 3, 4, 5};
    lis_t *l = arr_to_linked_list(arr, 5);

    my_sa(l, 1);
    cr_assert_eq(list_is_sorted(l), 1);
}

Test (my_ra, simple_test)
{
    int arr[] = {5, 1, 2, 3, 4};
    lis_t *l = arr_to_linked_list(arr, 5);

    my_ra(l, 1);
    cr_assert_eq(list_is_sorted(l), 1);
}

Test (operation, simple_test)
{
    int arr[] = {5, 1, 2, 3, 4};
    lis_t *l = arr_to_linked_list(arr, 5);

    operation(l);
    cr_assert_eq(list_is_sorted(l), 0);
}

Test (operation, simple_test2)
{
    int arr[] = {1, 5, 2, 3, 4};
    lis_t *l = arr_to_linked_list(arr, 5);

    operation(l);
    cr_assert_eq(list_is_sorted(l), 0);
}

Test (push_swap, simple_test2)
{
    int arr[] = {-1, 54, 12, 0, 10000, 56, 78, 5};
    lis_t *l = arr_to_linked_list(arr, 8);

    push_swap(l);
    cr_assert_eq(list_is_sorted(l), 1);
}