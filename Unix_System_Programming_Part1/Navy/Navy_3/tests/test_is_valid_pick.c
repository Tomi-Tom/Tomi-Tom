/*
** EPITECH PROJECT, 2022
** test_is_valid_pick_c
** File description:
** unit test test_is_valid_pick
*/

#include "criterion/criterion.h"
#include "my_navy.h"

Test (is_valid_pick, simple_test)
{
    char *b = "A2";

    cr_assert_eq(is_valid_pick(b), 1);
}

Test (is_valid_pick, simple_test2)
{
    char *b = "G8";

    cr_assert_eq(is_valid_pick(b), 1);
}

Test (is_valid_pick, false_test)
{
    char *b = "N12";

    cr_assert_eq(is_valid_pick(b), 84);
}