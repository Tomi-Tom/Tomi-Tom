/*
** EPITECH PROJECT, 2021
** WINDOW_C
** File description:
** open the window
*/

#include "my_runner.h"

void window(void)
{
    all_t setup = init_setup();
    fb_t *fb = framebuffer_create(setup.width, setup.height);
    sfMusic *music;
    music = sfMusic_createFromFile("medias/audio/intro/ohyes.ogg");

    setup = setup_option(setup);
    sfMusic_play(music);
    animation_begining(setup.window, setup, fb);
    music = sfMusic_createFromFile("medias/audio/intro/intro.ogg");
    sfMusic_play(music);
    animation_creator(setup.window, setup, fb);
    sfRenderWindow_setMouseCursorVisible(setup.window, sfTrue);
    setup.color.r = 0;
    setup.color.g = 0;
    setup.color.b = 0;
    display_menu(setup);
    free_all(setup, fb);
}
