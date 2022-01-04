/*
** EPITECH PROJECT, 2021
** MY_SWAP
** File description:
** Task01
*/

void my_swap(char *a, char *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
