/*
** EPITECH PROJECT, 2021
** DISPLAY_HEROS_C
** File description:
** deplay heros
*/

#include "my_runner.h"

all_t jump_heros(all_t a)
{
    static int add = 5;
    static int mult = 40;

    if (mult == -38) {
        mult = 40;
        a.jump = 0;

    } else {
        mult -= 2;
    }
    a.heros[a.perso].vec[0].y -= (add * (mult / 5));
    return a;
}

all_t move_rect(all_t a)
{
    static int i = 0;

    if (poll_event_game(a) == 10)
        a.jump = 1;
    if (a.jump == 1) {
        a = jump_heros(a);
    } else {
        a.heros[a.perso].vec[0].y = 9 * 108 - (a.heros[a.perso].rect.height);
        i += 1;
        if (i >= 3) {
            a.heros[a.perso].rect.left = a.heros[a.perso].rect.left + 85;
            i = 0;
        }
        if (a.heros[a.perso].rect.left == 510)
            a.heros[a.perso].rect.left = 0;
    }
    return a;
}

all_t display_heros(all_t a, sfColor color)
{
    a = move_rect(a);
    sfSprite_setTextureRect(a.heros[a.perso].sprite, a.heros[a.perso].rect);
    sfSprite_setColor(a.heros[a.perso].sprite, color);
    sfSprite_setPosition(a.heros[a.perso].sprite, a.heros[a.perso].vec[0]);
    sfRenderWindow_drawSprite(a.window, a.heros[a.perso].sprite, NULL);
    return a;
}