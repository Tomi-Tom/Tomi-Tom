/*
** EPITECH PROJECT, 2021
** MY_PUT_HEXA_C
** File description:
** take an int and display an hexa
*/

int my_strlen(char *str);

void my_putchar(char c);

void my_put_nbr_base(int nb, char *base)
{
    int len = my_strlen(base);

    if (nb > len) {
        my_put_nbr_base(nb / len, base);
        my_putchar(base[nb % len]);
    }
    if (nb < len) {
        my_putchar(base[nb]);
    }
}
