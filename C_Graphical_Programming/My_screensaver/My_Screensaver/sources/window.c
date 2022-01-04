/*
** EPITECH PROJECT, 2021
** WINDOW_C
** File description:
** open the window
*/

#include "my_scsv.h"

void poll_event(sfRenderWindow *window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}

void render_win(fb_t *fb, sfTexture *tex, sfSprite *sprite, all_t a)
{
    sfTexture_updateFromPixels(tex, fb->pixels, a.width, a.height, 0, 0);
    sfSprite_setTexture(sprite, tex, sfTrue);
}

void window(int sv)
{
    all_t a = init_struct_all();
    sfVideoMode mode = {a.width, a.height, a.bpp};
    sfRenderWindow *window = sfRenderWindow_create(mode, "SFML window", \
        sfResize | sfClose, NULL);
    sfEvent event;
    sfTexture *tex = sfTexture_create(a.width, a.height);
    sfSprite *sprite = sfSprite_create();
    fb_t *fb = framebuffer_create(a.width, a.height);
    setup_win(window, tex, sprite);
    while (sfRenderWindow_isOpen(window)) {
        a = select_sv(a, fb, sv);
        render_win(fb, tex, sprite, a);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
        poll_event(window, event);
    }
    free_everything(fb, sprite, tex, window);
}
