/*
** EPITECH PROJECT, 2021
** OPTIONS_C
** File description:
** utils functions to display help
*/

#include "my_scsv.h"

int is_error(char **av)
{
    if ((my_getnbr(av[1]) >= 1 && my_getnbr(av[1]) <= 6) && av[1][1] == '\0')
        return 0;
    if (av[1][0] == '-' && av[1][1] == 'd')
        return 0;
    if (av[1][0] == '-' && av[1][1] == 'h')
        return 0;
    write(2, "[84] Syntax error : please use \"./my_screensaver -h\"\n", 53);
    return 84;
}

void display_help(void)
{
    my_putstr("\n\t\t +----------------------------------------+ \n");
    my_putstr("\t\t | animation rendering in a CSFML window. | \n");
    my_putstr("\t\t +----------------------------------------+ \n\n");
    my_putstr("USAGE :\n");
    my_putstr(" =>\t ./my_screensaver [OPTIONS] / animation_id\n\n");
    my_putstr(" =>\t   animation_id\t\t ID of the animation ");
    my_putstr("to process (between 1 and 6).\n\n\n");
    my_putstr("OPTIONS :\n");
    my_putstr(" =>\t  -d\t\t\t print the description of all the animations");
    my_putstr(" and quit.\n");
    my_putstr(" =>\t  -h\t\t\t print the usage and quit.\n\n\n");
    my_putstr("USER INTERACTIONS :\n");
    my_putstr(" =>\t  NUM_PAD\t\t switch to the animation you selected by");
    my_putstr(" the num_pad\n\n");
}

void display_anim_help(void)
{
    my_putstr("\n\t\t +----------------------------------------+ \n");
    my_putstr("\t\t | animation rendering in a CSFML window. | \n");
    my_putstr("\t\t +----------------------------------------+ \n\n");
    my_putstr("ANIMATIONS :\n");
    my_putstr("\n\t  - [1] creates lines on each side that come together to");
    my_putstr("\n\t\tthe center, leaving a nuanced trail behind them\n");
    my_putstr("\n\t  - [2] creates some random lines and column and fade_out");
    my_putstr("\n\t\tat regular times\n");
    my_putstr("\n\t  - [3] a bunch of randomly placed and fading pixel\n");
    my_putstr("\n\t  - [4] creates some vertical and horizontal lines that");
    my_putstr("\n\t\tpass throught the screen with a fadded trail\n");
    my_putstr("\n\t  - [5] created colored squares with a black border");
    my_putstr("\n\t\twhich appear randomly with nuanced color\n");
    my_putstr("\n\t  - [6] all animations at the same time\n");
}
