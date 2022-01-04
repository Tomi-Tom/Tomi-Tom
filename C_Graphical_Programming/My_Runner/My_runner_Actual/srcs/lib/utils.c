/*
** EPITECH PROJECT, 2021
** UTILS_C
** File description:
** util functions
*/

#include <unistd.h>
#include <stdlib.h>

int my_strlen(const char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return i;
}

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}

int my_strlendup(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

char *my_strdup(char const *src)
{
    int i = 0;
    int len = my_strlendup(src);
    char *str;

    str = (malloc(sizeof(char) * (len + 1)));
    if (!(str))
        return (0);
    while (src[i]) {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
