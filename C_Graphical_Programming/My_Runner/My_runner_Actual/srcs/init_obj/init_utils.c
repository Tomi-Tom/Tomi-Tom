/*
** EPITECH PROJECT, 2021
** INIT_UTILS_C
** File description:
** initialisation of utils things
*/

#include "my_runner.h"

all_t init_numbers(all_t a)
{
    a.utils[0].path = my_strdup("medias/utils/numbers.png");
    a.utils[0].nb_frame = 1;
    a.utils[0].tex = sfTexture_createFromFile(a.utils[0].path, NULL);
    a.utils[0].rect.top = 0;
    a.utils[0].rect.left = 0;
    a.utils[0].rect.width = 150;
    a.utils[0].rect.height = 150;
    a.utils[0].vec = malloc(sizeof(sfVector2f));
    a.utils[0].vec[0].x = (a.width / 3) - 425;
    a.utils[0].vec[0].y = (a.height / 2) + 25;
    a.utils[0].sprite = sfSprite_create();
    sfSprite_setTexture(a.utils[0].sprite, a.utils[0].tex, sfTrue);
    return a;
}

all_t init_all_utils(all_t a)
{
    a = init_numbers(a);
    return a;
}