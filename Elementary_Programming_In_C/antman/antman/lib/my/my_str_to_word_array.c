/*
** EPITECH PROJECT, 2021
** STR_WORD_TO_ARRAY
** File description:
** put an str into an array
*/

#include <stdlib.h>

int is_alphanum(char c)
{
    if ((c >= 'a' && c <= 'z') || (c <= 'Z' && c >= 'A'))
        return (1);
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int my_strlen_loc(char const *str, int i)
{
    int count = 0;

    while (is_alphanum(str[i])) {
        i++;
        count++;
    }
    return (count);
}

int my_strlen_word(char const *str)
{
    int i = 0;
    int nb_word = 0;

    while (str[i]) {
        while (!(is_alphanum(str[i]))) {
            i++;
        }
        if (is_alphanum(str[i]))
            nb_word++;
        while (is_alphanum(str[i])) {
            i++;
        }
    }
    return (nb_word);
}

char	**my_str_to_word_array(char const *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **tab;

    tab = malloc((my_strlen_word(str) + 1) * sizeof(char *));
    while (str[i]) {
        while (!(is_alphanum(str[i])))
            i++;
        tab[j] = malloc(sizeof(char) * (my_strlen_loc(str, i) + 1));
        while (is_alphanum(str[i])) {
            tab[j][k] = str[i];
            k++;
            i++;
        }
        k = 0;
        j++;
    }
    tab[j] = 0;
    return (tab);
}
