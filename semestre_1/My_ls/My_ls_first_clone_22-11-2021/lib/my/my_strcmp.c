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
    char *tmp1 = my_strdup(s1);
    char *tmp2 = my_strdup(s2);

    tmp1 = my_strlowcase(tmp1);
    tmp2 = my_strlowcase(tmp2);
    while (tmp1[i] != '\0') {
        if (tmp2[i] == '\0')
            return (tmp1[i]);
        if (tmp2[i] != tmp1[i])
            return (tmp1[i] - tmp2[i]);
        i++;
    }
    return (tmp1[i] - tmp2[i]);
}
