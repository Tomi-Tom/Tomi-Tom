/*
** EPITECH PROJECT, 2021
** PAUSE_C
** File description:
** functions for pause menu
*/

#include "my_runner.h"

int check_button_pause(all_t a, sfMouseButton b, sfVector2f mouse)
{
    if (mouse.x > 720 && mouse.x < 1200 && mouse.y < 375 && mouse.y > 215) {
        sfRenderWindow_drawSprite(a.window, a.pause[2].sprite, NULL);
        if (sfMouse_isButtonPressed(b))
            return 9;
    }
    if (mouse.x > 720 && mouse.x < 1200 && mouse.y < 550 && mouse.y > 400) {
        sfRenderWindow_drawSprite(a.window, a.pause[3].sprite, NULL);
        if (sfMouse_isButtonPressed(b))
            return 0;
    }
    if (mouse.x > 720 && mouse.x < 1200 && mouse.y < 850 && mouse.y > 700) {
        sfRenderWindow_drawSprite(a.window, a.pause[4].sprite, NULL);
        if (sfMouse_isButtonPressed(b))
            return 3;
    }
    return 0;
}

int choose_menu_pause(all_t a)
{
    sfVector2f mouse = {0, 0};
    sfMouseButton b = 0;

    mouse.x = sfMouse_getPositionRenderWindow(a.window).x;
    mouse.y = sfMouse_getPositionRenderWindow(a.window).y;
    return check_button_pause(a, b, mouse);
}

all_t display_pause(all_t a)
{
    int choix = 0;

    sfMusic_pause(a.lvl[0].music);
    while (a.quit == 0 && choix != 9){
        sfRenderWindow_drawSprite(a.window, a.pause[0].sprite, NULL);
        sfRenderWindow_drawSprite(a.window, a.pause[1].sprite, NULL);
        choix = poll_event_game(a);
        choix = choose_menu_pause(a);
        if (choix == 3) {
            a.heros[a.perso].vec[0].x =  0.15 * a.width - 42;
            display_menu(a);
            a.quit = 1;
        }
        sfRenderWindow_display(a.window);
    }
    sfMusic_play(a.lvl[0].music);
    return a;
}