/*
** EPITECH PROJECT, 2021
** INIT_HERO_C
** File description:
** initialisation of sprites of menu
*/

#include "my_runner.h"

all_t init_hero_one(all_t a)
{
    a.heros[0].path = my_strdup("medias/heros/1.png");
    a.heros[0].nb_frame = 1;
    a.heros[0].tex = sfTexture_createFromFile(a.heros[0].path, NULL);
    a.heros[0].rect.top = 0;
    a.heros[0].rect.left = 0;
    a.heros[0].rect.width = 85;
    a.heros[0].rect.height = 100;
    a.heros[0].vec = malloc(sizeof(sfVector2f));
    a.heros[0].vec[0].x = 0.15 * a.width - (a.heros[0].rect.width / 2);
    a.heros[0].vec[0].y = 9 * 108 - (a.heros[0].rect.height);
    a.heros[0].sprite = sfSprite_create();
    sfSprite_setTexture(a.heros[0].sprite, a.heros[0].tex, sfTrue);
    return a;
}

all_t init_hero_two(all_t a)
{
    a.heros[1].path = my_strdup("medias/heros/2.png");
    a.heros[1].nb_frame = 1;
    a.heros[1].tex = sfTexture_createFromFile(a.heros[1].path, NULL);
    a.heros[1].rect.top = 0;
    a.heros[1].rect.left = 0;
    a.heros[1].rect.width = 85;
    a.heros[1].rect.height = 100;
    a.heros[1].vec = malloc(sizeof(sfVector2f));
    a.heros[1].vec[0].x = 0.15 * a.width - (a.heros[1].rect.width / 2);
    a.heros[1].vec[0].y = 9 * 108 - (a.heros[1].rect.height);
    a.heros[1].sprite = sfSprite_create();
    sfSprite_setTexture(a.heros[1].sprite, a.heros[1].tex, sfTrue);
    return a;
}

all_t init_hero_three(all_t a)
{
    a.heros[2].path = my_strdup("medias/heros/3.png");
    a.heros[2].nb_frame = 1;
    a.heros[2].tex = sfTexture_createFromFile(a.heros[2].path, NULL);
    a.heros[2].rect.top = 0;
    a.heros[2].rect.left = 0;
    a.heros[2].rect.width = 85;
    a.heros[2].rect.height = 100;
    a.heros[2].vec = malloc(sizeof(sfVector2f));
    a.heros[2].vec[0].x = 0.15 * a.width - (a.heros[2].rect.width / 2);
    a.heros[2].vec[0].y = 9 * 108 - (a.heros[2].rect.height);
    a.heros[2].sprite = sfSprite_create();
    sfSprite_setTexture(a.heros[2].sprite, a.heros[2].tex, sfTrue);
    return a;
}

all_t init_hero_four(all_t a)
{
    a.heros[3].path = my_strdup("medias/heros/4.png");
    a.heros[3].nb_frame = 1;
    a.heros[3].tex = sfTexture_createFromFile(a.heros[3].path, NULL);
    a.heros[3].rect.top = 0;
    a.heros[3].rect.left = 0;
    a.heros[3].rect.width = 85;
    a.heros[3].rect.height = 100;
    a.heros[3].vec = malloc(sizeof(sfVector2f));
    a.heros[3].vec[0].x = 0.15 * a.width - (a.heros[3].rect.width / 2);
    a.heros[3].vec[0].y = 9 * 108 - (a.heros[3].rect.height);
    a.heros[3].sprite = sfSprite_create();
    sfSprite_setTexture(a.heros[3].sprite, a.heros[3].tex, sfTrue);
    return a;
}

all_t init_all_heros(all_t a)
{
    a = init_hero_one(a);
    a = init_hero_two(a);
    a = init_hero_three(a);
    a = init_hero_four(a);
    a.perso = 0;
    return a;
}