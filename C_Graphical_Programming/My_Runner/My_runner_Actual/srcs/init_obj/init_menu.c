/*
** EPITECH PROJECT, 2021
** INIT_MENU_C
** File description:
** initialisation of sprites of menu
*/

#include "my_runner.h"

all_t init_menu_play_button(all_t a)
{
    a.menu[1].path = my_strdup("medias/menu/start_sheet.png");
    a.menu[1].nb_frame = 1;
    a.menu[1].tex = sfTexture_createFromFile(a.menu[1].path, NULL);
    a.menu[1].rect.top = 0;
    a.menu[1].rect.left = 0;
    a.menu[1].rect.width = 700;
    a.menu[1].rect.height = 300;
    a.menu[1].vec = malloc(sizeof(sfVector2f));
    a.menu[1].vec[0].x = (a.width / 2) - 350;
    a.menu[1].vec[0].y = (a.height / 3) - 150;
    a.menu[1].sprite = sfSprite_create();
    sfSprite_setTexture(a.menu[1].sprite, a.menu[1].tex, sfTrue);
    sfSprite_setPosition(a.menu[1].sprite, a.menu[1].vec[0]);
    return a;
}

all_t init_menu_exit_button(all_t a)
{
    a.menu[2].path = my_strdup("medias/menu/exit_sheet.png");
    a.menu[2].nb_frame = 1;
    a.menu[2].tex = sfTexture_createFromFile(a.menu[2].path, NULL);
    a.menu[2].rect.top = 0;
    a.menu[2].rect.left = 0;
    a.menu[2].rect.width = 700;
    a.menu[2].rect.height = 300;
    a.menu[2].vec = malloc(sizeof(sfVector2f));
    a.menu[2].vec[0].x = (a.width / 2) - 350;
    a.menu[2].vec[0].y = ((a.height / 3) * 2) - 100;
    a.menu[2].sprite = sfSprite_create();
    sfSprite_setTexture(a.menu[2].sprite, a.menu[2].tex, sfTrue);
    sfSprite_setPosition(a.menu[2].sprite, a.menu[2].vec[0]);
    return a;
}

all_t init_chain(all_t a)
{
    a.menu[3].path = my_strdup("medias/menu/chain3.png");
    a.menu[3].nb_frame = 1;
    a.menu[3].tex = sfTexture_createFromFile(a.menu[3].path, NULL);
    a.menu[3].rect.top = 0;
    a.menu[3].rect.left = 0;
    a.menu[3].rect.width = 300;
    a.menu[3].rect.height = 1080;
    a.menu[3].vec = malloc(sizeof(sfVector2f) * 2);
    a.menu[3].vec[0].x = (a.width / 3) - 150;
    a.menu[3].vec[0].y = -a.menu[3].rect.height;
    a.menu[3].vec[1].x = ((a.width / 3) * 2) - 150;
    a.menu[3].vec[1].y = -a.menu[3].rect.height;
    a.menu[3].sprite = sfSprite_create();
    sfSprite_setTexture(a.menu[3].sprite, a.menu[3].tex, sfTrue);
    sfSprite_setPosition(a.menu[3].sprite, a.menu[3].vec[0]);
    return a;
}

all_t init_all_menu(all_t a)
{
    a = init_menu_play_button(a);
    a = init_menu_exit_button(a);
    a = init_chain(a);
    a = init_menu2(a);
    sfSprite_setTextureRect(a.menu[1].sprite, a.menu[1].rect);
    sfSprite_setTextureRect(a.menu[2].sprite, a.menu[2].rect);
    return a;
}