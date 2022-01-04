/*
** EPITECH PROJECT, 2021
** MY_STRLEN_C
** File description:
** do a my_strlen
*/

int     my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i]) {
        i++;
    }
    return (i);
}
