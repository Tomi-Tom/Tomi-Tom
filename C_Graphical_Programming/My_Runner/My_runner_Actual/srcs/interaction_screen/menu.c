/*
** EPITECH PROJECT, 2021
** MENU_C
** File description:
** the menu screen
*/

#include "my_runner.h"

void display_menu(all_t a)
{
    int i = 0;
    int choix = 0;
    int aff = 0;

    a = init_all_menu(a);
    while (choix == 0 && a.quit == 0) {
        a = begining(a);
        if (i > 140)
            aff = 1;
        if (i > 10)
            a = overlay_menu(a);
        if (aff == 1)
            choix = choose_menu(a);
        sfRenderWindow_display(a.window);
        a.quit = poll_event(a);
        i++;
    }
    if (choix == 1)
        a = game_launch(a);
}