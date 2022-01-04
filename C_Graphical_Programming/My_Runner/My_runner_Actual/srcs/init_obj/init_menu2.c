/*
** EPITECH PROJECT, 2021
** INIT_MENU_C
** File description:
** initialisation of sprites of menu
*/

#include "my_runner.h"

all_t init_f_droite(all_t a)
{
    a.menu[4].path = my_strdup("medias/utils/f_droite_p.png");
    a.menu[4].nb_frame = 1;
    a.menu[4].tex = sfTexture_createFromFile(a.menu[4].path, NULL);
    a.menu[4].rect.top = 0;
    a.menu[4].rect.left = 0;
    a.menu[4].rect.width = 100;
    a.menu[4].rect.height = 105;
    a.menu[4].vec = malloc(sizeof(sfVector2f));
    a.menu[4].vec[0].x = (a.width / 3) - 250;
    a.menu[4].vec[0].y = (a.height / 2) + 50;
    a.menu[4].sprite = sfSprite_create();
    sfSprite_setTexture(a.menu[4].sprite, a.menu[4].tex, sfTrue);
    sfSprite_setPosition(a.menu[4].sprite, a.menu[4].vec[0]);
    return a;
}

all_t init_f_gauche(all_t a)
{
    a.menu[5].path = my_strdup("medias/utils/f_gauche_p.png");
    a.menu[5].nb_frame = 1;
    a.menu[5].tex = sfTexture_createFromFile(a.menu[5].path, NULL);
    a.menu[5].rect.top = 0;
    a.menu[5].rect.left = 0;
    a.menu[5].rect.width = 100;
    a.menu[5].rect.height = 105;
    a.menu[5].vec = malloc(sizeof(sfVector2f));
    a.menu[5].vec[0].x = (a.width / 3) - 550;
    a.menu[5].vec[0].y = (a.height / 2) + 50;
    a.menu[5].sprite = sfSprite_create();
    sfSprite_setTexture(a.menu[5].sprite, a.menu[5].tex, sfTrue);
    sfSprite_setPosition(a.menu[5].sprite, a.menu[5].vec[0]);
    return a;
}

all_t init_menu2(all_t a)
{
    a = init_f_droite(a);
    a = init_f_gauche(a);
    return a;
}