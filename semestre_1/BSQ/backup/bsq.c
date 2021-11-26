/*
** EPITECH PROJECT, 2021
** BSQ_C
** File description:
** BSQ_C
*/

#include "bsq.h"

void place_square(data_t square, char **map)
{
    int i = 0;
    int j = 0;

    while (i < square.size - 1) {
        while (j < square.size - 1) {
            map[square.y + i][square.x + j] = 'X';
            j++;
        }
        j = 0;
        i++;
    }
}

int check_map(char **map, int i, int j, int size)
{
    int k = 0;
    int l = 0;

    while (k < size && map[i + k]) {
        l = 0;
        while (l < size && map[i + k][j + l]) {
            if (map[i + k][j + l] == 'o')
                return 0;
            l++;
        }
        k++;
    }
    if (k != size || l != size)
        return 0;
    return 1;
}

data_t test_square(char **map, int i, int j, data_t res)
{
    int size = 0;
    int is_ok = 1;

    if (map[i][j] == 'o')
        return res;
    while (is_ok) {
        is_ok = check_map(map, i, j, size);
        size++;
    }
    if (size - 1 > res.size) {
        res.x = j;
        res.y = i;
        res.size = size - 1;
    }
    return res;
}

data_t find_square(char **map)
{
    int i = 1;
    int j = 0;
    data_t res;

    res.x = 0;
    res.y = 0;
    res.size = 0;
    while (map[i]) {
        while (map[i][j]) {
            res = test_square(map, i, j, res);
            j++;
        }
        j = 0;
        i++;
    }
    return res;
}

void bsq(char **map)
{
    data_t square;
    square = find_square(map);
    place_square(square, map);
}