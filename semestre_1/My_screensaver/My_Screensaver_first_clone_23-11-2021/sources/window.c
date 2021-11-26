/*
** EPITECH PROJECT, 2021
** WINDOW_C
** File description:
** open the window
*/

#include "my_scsv.h"

all_t select_sv(all_t a, fb_t *fb, int sv)
{
    if (sv == 1)
        a = animation1(a, fb);
    if (sv == 2)
        a = animation2(a, fb);
    if (sv == 3)
        a = animation3(a, fb);
    if (sv == 4)
        a = animation4(a, fb);
    if (sv == 5)
        a = animation5(a, fb);
    if (sv == 6)
        a = animation6(a, fb);
    return a;
}
void render_win(fb_t *fb, sfTexture *tex, sfSprite *sprite, all_t a)
{
    sfTexture_updateFromPixels(tex, fb->pixels, a.width, a.height, 0, 0);
    sfSprite_setTexture(sprite, tex, sfTrue);
}

int choose_anim(int sv, fb_t *fb, all_t a)
{
    if (sfKeyboard_isKeyPressed(sfKeyNumpad1))
        sv = 1;
    if (sfKeyboard_isKeyPressed(sfKeyNumpad2))
        sv = 2;
    if (sfKeyboard_isKeyPressed(sfKeyNumpad3))
        sv = 3;
    if (sfKeyboard_isKeyPressed(sfKeyNumpad4))
        sv = 4;
    if (sfKeyboard_isKeyPressed(sfKeyNumpad5))
        sv = 5;
    if (sfKeyboard_isKeyPressed(sfKeyNumpad6))
        sv = 6;
    if (sfKeyboard_isKeyPressed(sfKeyNumpad1) || \
        sfKeyboard_isKeyPressed(sfKeyNumpad2) || \
        sfKeyboard_isKeyPressed(sfKeyNumpad3) || \
        sfKeyboard_isKeyPressed(sfKeyNumpad4) || \
        sfKeyboard_isKeyPressed(sfKeyNumpad5) || \
        sfKeyboard_isKeyPressed(sfKeyNumpad5))
        clean_fb2(fb, a);
    return (sv);
}

void window(int sv)
{
    all_t a = init_struct_all();
    sfVideoMode mode = {a.width, a.height, a.bpp};
    sfRenderWindow *window = sfRenderWindow_create(mode, "SFML window",
                             sfResize | sfClose | sfFullscreen, NULL);
    sfEvent event;
    sfTexture *tex = sfTexture_create(a.width, a.height);
    sfSprite *sprite = sfSprite_create();
    fb_t *fb = framebuffer_create(a.width, a.height);
    setup_win(window, tex, sprite);
    while (sfRenderWindow_isOpen(window)) {
        a = select_sv(a, fb, sv);
        sv = choose_anim(sv, fb, a);
        render_win(fb, tex, sprite, a);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
        poll_event(window, event);
    }
    free_everything(fb, sprite, tex, window);
    free(a.color);
}
