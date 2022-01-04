/*
** EPITECH PROJECT, 2021
** TESTS_MY_ATOB_C
** File description:
** test for my_atob
*/

#include "criterion/criterion.h"
#include "my_navy.h"

Test (my_atob, simple_test)
{
    char c = '1';

    cr_assert_str_eq(my_atob(c), "00110001");
}

Test (my_atob, simple_test2)
{
    char c = '9';

    cr_assert_str_eq(my_atob(c), "00111001");
}

Test (my_atob, simple_test_letter)
{
    char c = 'A';

    cr_assert_str_eq(my_atob(c), "01000001");
}