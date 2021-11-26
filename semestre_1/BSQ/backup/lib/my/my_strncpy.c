/*
** EPITECH PROJECT, 2021
** MY_STRNCPY
** File description:
** Task02
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int len = 0;

    while (src[n - 1] != '\n' && i < n) {
        dest[i] = src[i];
        i++;
    }
    while (src[len] != '\0')
        len++;
    if (n > len)
        dest[i] = '\0';
    return (dest);
}
