/*
** EPITECH PROJECT, 2021
** MY_REV_STR
** File description:
** Task03
*/

char *my_revstr(char *str)
{
    int start = 0;
    int end = 0;
    int len = 0;
    char temp;

    while (str[len] != '\0')
        len++;
    end = len - 1;
    while (end - start >= 0) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return (str);
}
