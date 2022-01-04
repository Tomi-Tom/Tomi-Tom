/*
** EPITECH PROJECT, 2021
** INIT_MENU_C
** File description:
** initialisation of sprites of menu
*/

#include "my_runner.h"

all_t init_pause_leave_press(all_t a)
{
    a.pause[4].path = my_strdup("medias/pause/leave_press.png");
    a.pause[4].nb_frame = 1;
    a.pause[4].tex = sfTexture_createFromFile(a.pause[4].path, NULL);
    a.pause[4].rect.top = 0;
    a.pause[4].rect.left = 0;
    a.pause[4].rect.width = a.width;
    a.pause[4].rect.height = a.height;
    a.pause[4].vec = malloc(sizeof(sfVector2f));
    a.pause[4].vec[0].x = 0;
    a.pause[4].vec[0].y = 0;
    a.pause[4].sprite = sfSprite_create();
    sfSprite_setTexture(a.pause[4].sprite, a.pause[4].tex, sfTrue);
    return a;
}