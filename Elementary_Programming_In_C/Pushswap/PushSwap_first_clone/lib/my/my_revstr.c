/*
** EPITECH PROJECT, 2021
** MY_EVIL_STR_C
** File description:
** fait un strrev
*/

int     count(char *str)
{
    int i = 0;

    while (str[i]) {
        i++;
    }
    return (i);
}

char    *my_revstr(char *str)
{
    int len = count(str) - 1;
    int i = 0;
    char tmp;

    while (i < len / 2) {
        tmp = str[i];
        str[i] = str[len - i];
        str[len - i] = tmp;
        i++;
    }
    return (str);
}
