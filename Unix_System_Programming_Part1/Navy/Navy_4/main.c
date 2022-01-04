/*
** EPITECH PROJECT, 2021
** MAIN_C
** File description:
** main
*/

#include "my_navy.h"

gamestat *status;

int main(int ac, char **av)
{
    if (error_handling(ac, av))
        return 84;
    tabcase **tab;
    tabcase **enemy_tab = create_empty_tab();
    status = malloc(sizeof(status));
    status->msg = malloc(sizeof(char) * 420);
    if (ac == 2)
        tab = create_tab(av[1]);
    if (ac == 3)
        tab = create_tab(av[2]);
    if (tab == NULL) {
        my_puterror("error in given file.\n");
        return 84;
    }
    if (connect(ac - 1, av)) {
        my_puterror("unable to connect.\n");
        return 84;
    }
    main_game(tab, enemy_tab, ac - 1);
    return 0;
}
