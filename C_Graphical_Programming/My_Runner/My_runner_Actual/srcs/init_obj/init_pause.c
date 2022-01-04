/*
** EPITECH PROJECT, 2021
** INIT_MENU_C
** File description:
** initialisation of sprites of menu
*/

#include "my_runner.h"

all_t init_pause_fade(all_t a)
{
    a.pause[0].path = my_strdup("medias/pause/fade.png");
    a.pause[0].nb_frame = 1;
    a.pause[0].tex = sfTexture_createFromFile(a.pause[0].path, NULL);
    a.pause[0].rect.top = 0;
    a.pause[0].rect.left = 0;
    a.pause[0].rect.width = a.width;
    a.pause[0].rect.height = a.height;
    a.pause[0].vec = malloc(sizeof(sfVector2f));
    a.pause[0].vec[0].x = 0;
    a.pause[0].vec[0].y = 0;
    a.pause[0].sprite = sfSprite_create();
    sfSprite_setTexture(a.pause[0].sprite, a.pause[0].tex, sfTrue);
    return a;
}

all_t init_pause_menu(all_t a)
{
    a.pause[1].path = my_strdup("medias/pause/menu_pause.png");
    a.pause[1].nb_frame = 1;
    a.pause[1].tex = sfTexture_createFromFile(a.pause[1].path, NULL);
    a.pause[1].rect.top = 0;
    a.pause[1].rect.left = 0;
    a.pause[1].rect.width = a.width;
    a.pause[1].rect.height = a.height;
    a.pause[1].vec = malloc(sizeof(sfVector2f));
    a.pause[1].vec[0].x = 0;
    a.pause[1].vec[0].y = 0;
    a.pause[1].sprite = sfSprite_create();
    sfSprite_setTexture(a.pause[1].sprite, a.pause[1].tex, sfTrue);
    return a;
}

all_t init_pause_resume_press(all_t a)
{
    a.pause[2].path = my_strdup("medias/pause/resume_press.png");
    a.pause[2].nb_frame = 1;
    a.pause[2].tex = sfTexture_createFromFile(a.pause[2].path, NULL);
    a.pause[2].rect.top = 0;
    a.pause[2].rect.left = 0;
    a.pause[2].rect.width = a.width;
    a.pause[2].rect.height = a.height;
    a.pause[2].vec = malloc(sizeof(sfVector2f));
    a.pause[2].vec[0].x = 0;
    a.pause[2].vec[0].y = 0;
    a.pause[2].sprite = sfSprite_create();
    sfSprite_setTexture(a.pause[2].sprite, a.pause[2].tex, sfTrue);
    return a;
}

all_t init_pause_option_press(all_t a)
{
    a.pause[3].path = my_strdup("medias/pause/option_press.png");
    a.pause[3].nb_frame = 1;
    a.pause[3].tex = sfTexture_createFromFile(a.pause[3].path, NULL);
    a.pause[3].rect.top = 0;
    a.pause[3].rect.left = 0;
    a.pause[3].rect.width = a.width;
    a.pause[3].rect.height = a.height;
    a.pause[3].vec = malloc(sizeof(sfVector2f));
    a.pause[3].vec[0].x = 0;
    a.pause[3].vec[0].y = 0;
    a.pause[3].sprite = sfSprite_create();
    sfSprite_setTexture(a.pause[3].sprite, a.pause[3].tex, sfTrue);
    return a;
}

all_t init_all_pause(all_t a)
{
    a = init_pause_fade(a);
    a = init_pause_menu(a);
    a = init_pause_resume_press(a);
    a = init_pause_option_press(a);
    a = init_pause_leave_press(a);
    return a;
}