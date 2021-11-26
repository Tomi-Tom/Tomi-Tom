/*
** EPITECH PROJECT, 2021
** SHOW_WORD_ARRAY
** File description:
** show word array
*/

#include <unistd.h>

void my_putchar(char c);
int my_strlen(char const *str);   

void my_putstr_array(char const *str)
{
    write(1, str, my_strlen(str));
}

int my_show_word_array(char **tab)
{
    int i = 1;

    while (tab[i]) {
        my_putstr_array(tab[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}
