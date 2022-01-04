/*
** EPITECH PROJECT, 2021
** INIT_OBJ_C
** File description:
** initialisation of objects
*/

#include "my_runner.h"

sfColor init_color_setup(void)
{
    sfColor color;

    color.r = 0;
    color.g = 0;
    color.b = 0;
    color.a = 255;
    return color;
}

all_t init_obj2(all_t a)
{
    a.lvl = malloc(sizeof(mus_t) * 1);
    a = init_all_music(a);
    return a;
}

all_t init_obj(all_t a)
{
    a.bg = malloc(sizeof(obj_t) * 3);
    a = init_all_bg(a);
    a.menu = malloc(sizeof(obj_t) * 6);
    a = init_all_menu(a);
    a.ground = malloc(sizeof(obj_t) * 3);
    a = init_all_ground(a);
    a.heros = malloc(sizeof(obj_t) * 4);
    a = init_all_heros(a);
    a.pause = malloc(sizeof(obj_t) * 5);
    a = init_all_pause(a);
    a.utils = malloc(sizeof(obj_t) * 1);
    a = init_all_utils(a);
    a.quit = 0;
    a.color = init_color_setup();
    return init_obj2(a);
}