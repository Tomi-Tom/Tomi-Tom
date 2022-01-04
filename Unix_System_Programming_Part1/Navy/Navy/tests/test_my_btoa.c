/*
** EPITECH PROJECT, 2021
** TESTS_MY_btoa_C
** File description:
** test for my_btoa
*/

#include "criterion/criterion.h"
#include "my_navy.h"

Test (my_btoa, simple_test)
{
    char b[9] = "00110001";

    cr_assert_eq(my_btoa(b), '1');
}

Test (my_btoa, simple_test2)
{
    char b[9] = "00111001";

    cr_assert_eq(my_btoa(b), '9');
}

Test (my_btoa, simple_test_letter)
{
    char b[9] = "01000001";

    cr_assert_eq(my_btoa(b), 'A');
}
