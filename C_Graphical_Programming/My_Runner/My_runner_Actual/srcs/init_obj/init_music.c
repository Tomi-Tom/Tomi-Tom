/*
** EPITECH PROJECT, 2021
** INIT_MUSIC_C
** File description:
** initialisation of music
*/

#include "my_runner.h"

all_t init_lvl_one(all_t a)
{
    a.lvl[0].path = my_strdup("medias/audio/warbringer.ogg");
    a.lvl[0].music = sfMusic_createFromFile(a.lvl[0].path);
    return a;
}

all_t init_all_music(all_t a)
{
    a = init_lvl_one(a);
    return a;
}