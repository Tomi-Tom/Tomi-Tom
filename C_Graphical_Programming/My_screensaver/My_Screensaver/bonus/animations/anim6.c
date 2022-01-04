/*
** EPITECH PROJECT, 2021
** ANIM5_C
** File description:
** animation 5
*/

#include "my_scsv.h"

all_t animation6(all_t all, fb_t *fb)
{
    all = animation1(all, fb);
    all = animation2(all, fb);
    all = animation3(all, fb);
    all = animation4(all, fb);
    all = animation5(all, fb);
    return all;
}
