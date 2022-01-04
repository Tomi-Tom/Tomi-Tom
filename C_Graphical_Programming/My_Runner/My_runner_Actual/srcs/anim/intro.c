/*
** EPITECH PROJECT, 2021
** INTRO_C
** File description:
** animations d'introduction
*/

#include "my_runner.h"

void free_things(sfSprite *s, sfTexture *t)
{
    sfSprite_destroy(s);
    sfTexture_destroy(t);
}

void animation_begining(sfRenderWindow *window, all_t a, fb_t *fb)
{
    sfVector2f vec = {0, 0};
    sfSprite *sprite;
    sfTexture *texture = sfTexture_createFromFile("medias/logo.png", NULL);
    int i = 0;

    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vec);
    while (i < 100) {
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
        i++;
    } while (i-- > 25) {
        clean_fb(fb, a);
        render_win(fb, texture, sprite, a);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    free_things(sprite, texture);
}

void animation_creator(sfRenderWindow *window, all_t a, fb_t *fb)
{
    sfVector2f vec = {0, 50};
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile("medias/createur.png", NULL);
    int i = 0;

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, vec);
    while (i < 100) {
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
        i++;
    } while (i-- > 25) {
        clean_fb(fb, a);
        render_win(fb, texture, sprite, a);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    free_things(sprite, texture);
}
