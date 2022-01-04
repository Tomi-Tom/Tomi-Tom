/*
** EPITECH PROJECT, 2021
** STRCAT
** File description:
** STRCAT
*/

char    *my_strccat(char *dest, char c)
{
    int i = 0;

    while (dest[i])
        i++;
    dest[i] = c;
    dest[i + 1] = '\0';
    return (dest);
}

char    *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    while (dest[i])
        i++;
    while (src[j + 1]) {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j + 1] = '\0';
    return (dest);
}
