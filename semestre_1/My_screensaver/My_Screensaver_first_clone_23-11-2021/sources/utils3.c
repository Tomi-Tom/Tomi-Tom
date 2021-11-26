/*
** EPITECH PROJECT, 2021
** UTILS3_C
** File description:
** utils functions
*/

#include "my_scsv.h"

sfColor generate_color(void)
{
    int r = rand() % 255;
    int g = rand() % 50;
    int b = rand() % 200;

    if (b < 100)
        b = b + 75;
    if (r < 150)
        r = r + 50;
    sfColor color = {r, g, b, 255};
    return color;
}

sfColor generate_color2(void)
{
    int r = rand() % 255;
    int g = rand() % 255;
    int b = rand() % 255;

    sfColor color = {r, g, b, 255};
    return color;
}

void poll_event(sfRenderWindow *window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed || \
            sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(window);
    }
}

sfColor set_color_black2(void)
{
    sfColor color;

    int r = 0;
    int g = 0;
    int b = 0;

    color.r = r;
    color.g = g;
    color.b = b;
    color.a = 125;
    return color;
}

void clean_fb2(fb_t *fb, all_t all)
{
    int i = 0;
    int j = 0;
    sfColor color = set_color_black2();

    while (i < all.height) {
        while (j < all.width) {
            my_put_pixel(fb,j, i, color);
            j++;
        }
        j = 0;
        i++;
    }
}
