/*
** EPITECH PROJECT, 2021
** FREE_ALL_C
** File description:
** the place where all get his freedom
*/

#include "my_runner.h"

void free_all(all_t a, fb_t *fb)
{
    int i = 0;

    while (i < 3) {
        sfTexture_destroy(a.bg[i].tex);
        sfSprite_destroy(a.bg[i].sprite);
        i++;
    } i = 1;
   while (i < 6) {
        sfTexture_destroy(a.menu[i].tex);
        sfSprite_destroy(a.menu[i].sprite);
        i++;
    } i = 0;
    while (i < 3) {
        sfTexture_destroy(a.ground[i].tex);
        sfSprite_destroy(a.ground[i].sprite);
        i++;
    } i = 0;
    while (i < 4) {
        sfTexture_destroy(a.heros[i].tex);
        sfSprite_destroy(a.heros[i].sprite);
        i++;
    } i = 0;
    while (i < 5) {
        sfTexture_destroy(a.pause[i].tex);
        sfSprite_destroy(a.pause[i].sprite);
        i++;
    } i = 0;
    while (i < 1) {
        sfTexture_destroy(a.utils[i].tex);
        sfSprite_destroy(a.utils[i].sprite);
        i++;
    }
    sfMusic_destroy(a.lvl[0].music);
    free(fb);
    sfRenderWindow_destroy(a.window);
    return;
}