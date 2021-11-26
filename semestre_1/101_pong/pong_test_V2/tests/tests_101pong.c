/*
** EPITECH PROJECT, 2021
** tests_101pong.c
** File description:
** 101 pong unit tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <101pong.h>

#include "101pong.h"

void redirect(void)
{
    cr_redirect_stdout();
    cr_redirect_stdin();
}

Test (pong, full_test, .init=redirect)
{
    char **av = {"./101pong", "1", "3", "5", "7", "9", "-2", "4"};
    pong(av); //changer pong en int ?

    cr_assert_stdout_eq_str("The velocity vector of the ball is:\n(6.00, 6.00, -7.00)\nAt time t + 4, ball coordinates will be:\n(31.00, 33.00, -30.00)\nThe ball won’t reach the paddle.");
}
