/*
** EPITECH PROJECT, 2021
** DRAW_C
** File description:
** functions to draw
*/

#include "my_runner.h"

void render_win(fb_t *fb, sfTexture *tex, sfSprite *sprite, all_t a)
{
    sfTexture_updateFromPixels(tex, fb->pixels, a.width, a.height, 0, 0);
    sfSprite_setTexture(sprite, tex, sfTrue);
}

int my_put_pixel(fb_t *buffer, unsigned int x, \
    unsigned int y, sfColor color)
{
    buffer->pixels[4*(y*buffer->width+x)] = color.r;
    buffer->pixels[4*(y*buffer->width+x)+1] = color.g;
    buffer->pixels[4*(y*buffer->width+x)+2] = color.b;
    buffer->pixels[4*(y*buffer->width+x)+3] = color.a;
    return (0);
}

void clean_fb(fb_t *fb, all_t all)
{
    int i = 0;
    int j = 0;
    sfColor color = {0, 0, 0, 20};

    while (i < all.height) {
        while (j < all.width) {
            my_put_pixel(fb, j, i, color);
            j++;
        }
        j = 0;
        i++;
    }
}
