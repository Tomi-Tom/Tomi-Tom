/*
** EPITECH PROJECT, 2021
** MENU_C
** File description:
** the menu screen
*/

#include "my_runner.h"

int check_button(all_t a, sfMouseButton b, sfVector2f mouse)
{
    a.menu[1].rect.left = 0;
    a.menu[2].rect.left = 0;
    if (mouse.x > 650 && mouse.x < 1270 && mouse.y < 480 && mouse.y > 250) {
        a.menu[1].rect.left = 700;
        if (sfMouse_isButtonPressed(b))
            return 1;
    }
    if (mouse.x > 650 && mouse.x < 1270 && mouse.y < 890 && mouse.y > 650) {
        sfRenderWindow_drawSprite(a.window, a.menu[2].sprite, NULL);
        a.menu[2].rect.left = 700;
        if (sfMouse_isButtonPressed(b))
            return 2;
    }
    sfSprite_setTextureRect(a.menu[1].sprite, a.menu[1].rect);
    sfSprite_setTextureRect(a.menu[2].sprite, a.menu[2].rect);
    sfRenderWindow_drawSprite(a.window, a.menu[1].sprite, NULL);
    sfRenderWindow_drawSprite(a.window, a.menu[2].sprite, NULL);
    return 0;
}

int choose_menu(all_t a)
{
    sfVector2f mouse = {0, 0};
    sfMouseButton b = 0;

    mouse.x = sfMouse_getPositionRenderWindow(a.window).x;
    mouse.y = sfMouse_getPositionRenderWindow(a.window).y;
    return check_button(a, b, mouse);
}

all_t vector_trans(all_t a)
{
    if (a.menu[3].vec[0].y < 0)
        a.menu[3].vec[0].y += 18;
    if (a.menu[3].vec[1].y < 0)
        a.menu[3].vec[1].y += 18;
    return a;
}

all_t overlay_menu(all_t a)
{
    int i = 0;
    static int j = 0;
    static int aff = 0;

    j++;
    a = vector_trans(a);
    while (i < 2) {
        sfSprite_setPosition(a.menu[3].sprite, a.menu[3].vec[i]);
        sfRenderWindow_drawSprite(a.window, a.menu[3].sprite, NULL);
        i++;
    }
    if (j > 140)
        aff = 1;
    if (aff == 1)
        a = choose_hero(a);
    return a;
}