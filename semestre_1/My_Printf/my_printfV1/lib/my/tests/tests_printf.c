/*
** EPITECH PROJECT, 2021
** UNIT_TESTS_C
** File description:
** UNIT_TESTS
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

Test(my_printf, flag_d)
{
    int i = 100;

    cr_assert_stdout_eq_str(1, y_printf("je suis %d\n", i), printf("je suis %d\n", i));
}