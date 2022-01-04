/*
** EPITECH PROJECT, 2021
** MENU_C
** File description:
** the menu screen
*/

#include "my_runner.h"

all_t change_sprite(all_t a, sfMouseButton b, sfVector2f mouse, int click)
{
    if (mouse.x > 390 && mouse.x < 490 && mouse.y < 680 && mouse.y > 590) {
        a.menu[4].rect.left = 100;
        if (sfMouse_isButtonPressed(b) && click == 1)
            a.perso += 1;
    }
    if (mouse.x > 90 && mouse.x < 190 && mouse.y < 680 && mouse.y > 590) {
        a.menu[5].rect.left = 100;
        if (sfMouse_isButtonPressed(b) && click == 1)
            a.perso -= 1;
    }
    return a;
}

all_t check_click(all_t a, sfMouseButton b, sfVector2f mouse)
{
    static int click = 0;

    a.menu[4].rect.left = 0;
    a.menu[5].rect.left = 0;
    if (sfMouse_isButtonPressed(b))
        click += 1;
    else
        click = 0;
    a = change_sprite(a, b, mouse, click);
    if (a.perso < 0)
        a.perso = 3;
    if (a.perso > 3)
        a.perso = 0;
    return a;
}

void display_arrows(all_t a)
{
    int i = 4;

    while (i < 6) {
        sfSprite_setTextureRect(a.menu[i].sprite, a.menu[i].rect);
        sfSprite_setPosition(a.menu[i].sprite, a.menu[i].vec[0]);
        sfRenderWindow_drawSprite(a.window, a.menu[i].sprite, NULL);
        i++;
    }
    a.utils[0].rect.left = a.perso * 150;
    sfSprite_setTextureRect(a.utils[0].sprite, a.utils[0].rect);
    sfSprite_setPosition(a.utils[0].sprite, a.utils[0].vec[0]);
    sfRenderWindow_drawSprite(a.window, a.utils[0].sprite, NULL);
}

all_t choose_hero(all_t a)
{
    sfVector2f mouse = {0, 0};
    sfMouseButton b = 0;

    mouse.x = sfMouse_getPositionRenderWindow(a.window).x;
    mouse.y = sfMouse_getPositionRenderWindow(a.window).y;
    a = check_click(a, b, mouse);
    sfSprite_setTexture(a.heros[a.perso].sprite, a.heros[a.perso].tex, sfTrue);
    display_arrows(a);
    return a;
}