/*
** EPITECH PROJECT, 2021
** ANIM5_C
** File description:
** animation 5
*/

#include "my_scsv.h"

all_t animation6(all_t all, fb_t *fb)
{
    forward(all, fb);
    backward(all, fb);
    forward1(all, fb);
    backward1(all, fb);
    return all;
}
