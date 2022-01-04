/*
** EPITECH PROJECT, 2021
** INIT_BG_C
** File description:
** initialisation of background
*/

#include "my_runner.h"

all_t init_bg_back(all_t a)
{
    a.bg[0].path = my_strdup("medias/bg/bg1.png");
    a.bg[0].nb_frame = 1;
    a.bg[0].tex = sfTexture_createFromFile(a.bg[0].path, NULL);
    a.bg[0].rect.top = 0;
    a.bg[0].rect.left = 0;
    a.bg[0].rect.width = 1920;
    a.bg[0].rect.height = 1080;
    a.bg[0].vec = malloc(sizeof(sfVector2f) * 2);
    a.bg[0].vec[0].x = 0;
    a.bg[0].vec[0].y = 0;
    a.bg[0].vec[1].x = 1920;
    a.bg[0].vec[1].y = 0;
    a.bg[0].sprite = sfSprite_create();
    sfSprite_setTexture(a.bg[0].sprite, a.bg[0].tex, sfTrue);
    return a;
}

all_t init_bg_mid(all_t a)
{
    a.bg[1].path = my_strdup("medias/bg/bg2.png");
    a.bg[1].nb_frame = 1;
    a.bg[1].tex = sfTexture_createFromFile(a.bg[1].path, NULL);
    a.bg[1].rect.top = 0;
    a.bg[1].rect.left = 0;
    a.bg[1].rect.width = 1920;
    a.bg[1].rect.height = 1080;
    a.bg[1].vec = malloc(sizeof(sfVector2f) * 2);
    a.bg[1].vec[0].x = 0;
    a.bg[1].vec[0].y = -100;
    a.bg[1].vec[1].x = 1920;
    a.bg[1].vec[1].y = -100;
    a.bg[1].sprite = sfSprite_create();
    sfSprite_setTexture(a.bg[1].sprite, a.bg[1].tex, sfTrue);
    return a;
}

all_t init_bg_front(all_t a)
{
    a.bg[2].path = my_strdup("medias/bg/bg3.png");
    a.bg[2].nb_frame = 1;
    a.bg[2].tex = sfTexture_createFromFile(a.bg[2].path, NULL);
    a.bg[2].rect.top = 0;
    a.bg[2].rect.left = 0;
    a.bg[2].rect.width = 1920;
    a.bg[2].rect.height = 1080;
    a.bg[2].vec = malloc(sizeof(sfVector2f));
    a.bg[2].vec[0].x = 0;
    a.bg[2].vec[0].y = -50;
    a.bg[2].vec[1].x = 1920;
    a.bg[2].vec[1].y = -50;
    a.bg[2].sprite = sfSprite_create();
    sfSprite_setTexture(a.bg[2].sprite, a.bg[2].tex, sfTrue);
    return a;
}

all_t init_all_bg(all_t a)
{
    a = init_bg_back(a);
    a = init_bg_mid(a);
    a = init_bg_front(a);
    return a;
}