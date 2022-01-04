/*
** EPITECH PROJECT, 2021
** MY_STRCMP
** File description:
** Task06
*/

#include "my.h"

int my_strcmp_nsens(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *tmp1 = my_strdup(s1);
    char *tmp2 = my_strdup(s2);

    tmp1 = my_strlowcase(tmp1);
    tmp2 = my_strlowcase(tmp2);
    if (tmp1[0] == '.')
        j = 1;
    if (tmp2[0] == '.')
        k = 1;
    while (tmp1[i + j] != '\0') {
        if (tmp2[i + k] == '\0')
            return (tmp1[i + j]);
        if (tmp2[i + k] != tmp1[i + j])
            return (tmp1[i + j] - tmp2[i + k]);
        i++;
    }
    return (tmp1[i + j] - tmp2[i + k]);
}
