/*
** EPITECH PROJECT, 2021
** navy
** File description:
** test_my_str_is_eq.c
*/

#include "criterion/criterion.h"
#include "my_navy.h"

Test(my_str_is_eq, really_eq)
{
    cr_assert(my_str_is_eq("test", "test"));
}

Test(my_str_is_eq, eq_but_one_longer)
{
    cr_assert(!my_str_is_eq("test", "tests"));
}

Test(my_str_is_eq, not_eq)
{
    cr_assert(!my_str_is_eq("moopy", "test"));
}

Test(my_str_is_eq, not_eq_but_same_len)
{
    cr_assert(!my_str_is_eq("moop", "test"));
}