/*
** EPITECH PROJECT, 2021
** UTILS2_C
** File description:
** utils functions
*/

#include "my_scsv.h"

void free_everything(fb_t *f, sfSprite *s, sfTexture *t, sfRenderWindow *w)
{
    framebuffer_destroy(f);
    sfSprite_destroy(s);
    sfTexture_destroy(t);
    sfRenderWindow_destroy(w);
}

sfColor *my_init_color(void)
{
    sfColor *color;

    color = malloc(sizeof(sfColor) * 5);
    color[1] = generate_color();
    color[2] = generate_color();
    color[3] = generate_color();
    color[4] = generate_color();
    return color;
}

all_t init_struct_all(void)
{
    all_t a;

    a.width = 1920;
    a.height = 1080;
    a.bpp = 32;
    a.i = 0;
    a.j = 0;
    a.k = 0;
    a.l = 0;
    a.lim1 = 0;
    a.lim2 = 0;
    a.limite = 1;
    a.count = 0;
    a.more1 = 1;
    a.more2 = 1;
    a.more3 = 1;
    a.more4 = 1;
    a.color = my_init_color();
    return a;
}

sfColor nuance_color(sfColor color, all_t *all)
{
    if (color.r == 255) {
        all->more3 = 0;
    }
    if (color.r == 0) {
        all->more3 = 1;
    }
    if (all->more3)
        color.r++;
    else
        color.r--;
    return color;
}

int setup_win(sfRenderWindow *window, sfTexture *tex, sfSprite *sprite)
{
    sfSprite_setTexture(sprite, tex, sfTrue);
    sfRenderWindow_setFramerateLimit(window, 60);
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    sfRenderWindow_setFramerateLimit(window, 60);
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_display(window);
    return 0;
}
