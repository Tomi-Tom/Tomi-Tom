/*
** EPITECH PROJECT, 2021
** SETUP_WIN_C
** File description:
** setup window
*/

#include "my_runner.h"

fb_t *framebuffer_create(unsigned int width, unsigned int height)
{
    fb_t *pointer = malloc(sizeof(fb_t));

    pointer->width = width;
    pointer->height = height;
    pointer->pixels = malloc(width * height * 4);
    return (pointer);
}

all_t init_setup(void)
{
    all_t a;
    sfVideoMode mode = {a.width = 1920, a.height = 1080, a.bpp = 60};
    sfRenderWindow *window = sfRenderWindow_create(a.mode, "My_Runner", \
    sfResize | sfClose | sfFullscreen, NULL);

    a.mode = mode;
    a.window = window;
    a.jump = 0;
    a.perso = 1;
    a = init_obj(a);
    return a;
}

all_t setup_option(all_t a)
{
    sfRenderWindow_setFramerateLimit(a.window, a.bpp);
    sfRenderWindow_setMouseCursorVisible(a.window, sfFalse);
    return a;
}
