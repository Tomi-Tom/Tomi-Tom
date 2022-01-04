/*
** EPITECH PROJECT, 2021
** UTILS_C
** File description:
** fonctions utilitaires
*/

#include "my_scsv.h"

fb_t *framebuffer_create(unsigned int width, unsigned int height)
{
    fb_t *pointer = malloc(sizeof(fb_t));

    pointer->width = width;
    pointer->height = height;
    pointer->pixels = malloc(width * height * 4);
    return (pointer);
}

void framebuffer_destroy(fb_t *framebuffer)
{
    free(framebuffer);
}

all_t select_sv(all_t a, fb_t *fb, int sv)
{
    static int tmp = 1;
    if (sv != tmp) {
        tmp = sv;
        a = init_struct_all();
    }
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

void free_everything(fb_t *f, sfSprite *s, sfTexture *t, sfRenderWindow *w)
{
    framebuffer_destroy(f);
    sfSprite_destroy(s);
    sfTexture_destroy(t);
    sfRenderWindow_destroy(w);
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
        sfKeyboard_isKeyPressed(sfKeyNumpad6))
        clean_fb2(fb, a);
    return (sv);
}
