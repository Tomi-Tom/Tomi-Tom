/*
** EPITECH PROJECT, 2021
** INIT_GROUND_C
** File description:
** initialisation of ground
*/

#include "my_runner.h"

all_t init_ground(all_t a)
{
    a.ground[0].path = my_strdup("medias/ground/ground.png");
    a.ground[0].nb_frame = 1;
    a.ground[0].tex = sfTexture_createFromFile(a.ground[0].path, NULL);
    a.ground[0].rect.top = 0;
    a.ground[0].rect.left = 0;
    a.ground[0].rect.width = 1920;
    a.ground[0].rect.height = 1080;
    a.ground[0].vec = malloc(sizeof(sfVector2f) * 2);
    a.ground[0].vec[0].x = 0;
    a.ground[0].vec[0].y = -0.046 * a.height;
    a.ground[0].vec[1].x = a.ground[0].rect.width;
    a.ground[0].vec[1].y = -0.046 * a.height;
    a.ground[0].sprite = sfSprite_create();
    sfSprite_setTexture(a.ground[0].sprite, a.ground[0].tex, sfTrue);
    return a;
}

all_t init_front(all_t a)
{
    a.ground[1].path = my_strdup("medias/ground/front.png");
    a.ground[1].nb_frame = 1;
    a.ground[1].tex = sfTexture_createFromFile(a.ground[1].path, NULL);
    a.ground[1].rect.top = 0;
    a.ground[1].rect.left = 0;
    a.ground[1].rect.width = 1920;
    a.ground[1].rect.height = 1080;
    a.ground[1].vec = malloc(sizeof(sfVector2f) * 2);
    a.ground[1].vec[0].x = 0;
    a.ground[1].vec[0].y = 0.0185 * a.height;
    a.ground[1].vec[1].x = a.ground[1].rect.width;
    a.ground[1].vec[1].y = 0.0185 * a.height;
    a.ground[1].sprite = sfSprite_create();
    sfSprite_setTexture(a.ground[1].sprite, a.ground[1].tex, sfTrue);
    return a;
}

all_t init_back(all_t a)
{
    a.ground[2].path = my_strdup("medias/ground/front.png");
    a.ground[2].nb_frame = 1;
    a.ground[2].tex = sfTexture_createFromFile(a.ground[2].path, NULL);
    a.ground[2].rect.top = 0;
    a.ground[2].rect.left = 0;
    a.ground[2].rect.width = 1920;
    a.ground[2].rect.height = 1080;
    a.ground[2].vec = malloc(sizeof(sfVector2f) * 2);
    a.ground[2].vec[0].x = 0;
    a.ground[2].vec[0].y = -0.028 * a.height;
    a.ground[2].vec[1].x = 1920;
    a.ground[2].vec[1].y = -0.028 * a.height;
    a.ground[2].sprite = sfSprite_create();
    sfSprite_setTexture(a.ground[2].sprite, a.ground[2].tex, sfTrue);
    return a;
}

all_t init_all_ground(all_t a)
{
    a = init_ground(a);
    a = init_front(a);
    a = init_back(a);
    return a;
}