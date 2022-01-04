/*
** EPITECH PROJECT, 2021
** BASE_BOAT_C
** File description:
** base boat
*/

#include "my_navy.h"

int file_verification(char *buffer)
{
    if (my_strlen(buffer) < 31)
        return 0;
    for (int i = 0; i < 4; i++) {
        if (buffer[i * 8] < '2' || buffer[i * 8] > '5')
            return 0;
        if (buffer[i * 8 + 1] != ':' || buffer[i * 8 + 4] != ':')
            return 0;
        if (buffer[i * 8 + 2] < 'A' || buffer[i * 8 + 2] > 'H' ||
        buffer[i * 8 + 5] < 'A' || buffer[i * 8 + 5] > 'H')
            return 0;
        if (buffer[i * 8 + 3] < '1' || buffer[i * 8 + 3] > '8' ||
        buffer[i * 8 + 6] < '1' || buffer[i * 8 + 6] > '8')
            return 0;
    }
    return 1;
}

char *pos_file_reader(char *file_path)
{
    int fd = open(file_path, O_RDONLY);
    char *buffer = malloc(sizeof(char) * 33);
    int read_succes = 0;

    if (fd == -1)
        return NULL;
    read_succes = read(fd, buffer, 33);
    if (read_succes == -1)
        return NULL;
    close(fd);
    if (file_verification(buffer)) {
        buffer[32] = '\0';
        return buffer;
    } else
        return NULL;
}

int fill_boat(tabcase **tab, int boat_len, int *case1, int *case2)
{
    if (boat_len < 2 && boat_len > 5)
        return 84;
    if (case1[0] == case2[0]) {
        if (case2[1] - case1[1] + 1 != boat_len)
            return 84;
        for (int i = case1[1]; i < case1[1] + boat_len && i < 8; i++) {
            tab[i][case1[0]].isboat = 1;
            tab[i][case1[0]].display = (char) boat_len + '0';
        }
    } else if (case1[1] == case2[1]) {
        if (case2[0] - case1[0] + 1 != boat_len)
            return 84;
        for (int i = case1[0]; i < case1[0] + boat_len && i < 8; i++) {
            tab[case1[1]][i].isboat = 1;
            tab[case1[1]][i].display = (char) boat_len + '0';
        }
    } else
        return 1;
    return 0;
}

tabcase **create_empty_tab(void)
{
    tabcase **output = malloc(sizeof(tabcase *) * 8);

    for (int i = 0; i < 8; i++) {
        output[i] = malloc(sizeof(tabcase) * 8);
        for (int j = 0; j < 8; j++) {
            output[i][j].is_touched = 0;
            output[i][j].isboat = 0;
            output[i][j].display = '.';
        }
    }
    return output;
}

tabcase **create_tab(char *file_path)
{
    tabcase **output = create_empty_tab();
    char *str = pos_file_reader(file_path);
    int boat_len = 0;
    int boat_case_1[] = {0, 0};
    int boat_case_2[] = {0, 0};

    if (str == NULL)
        return NULL;
    for (int line = 0; line < 4; line++) {
        boat_len = str[line * POS_FILE_LINE_LEN] - '0';
        boat_case_1[0] = str[line * POS_FILE_LINE_LEN + 2] - 'A';
        boat_case_1[1] = str[line * POS_FILE_LINE_LEN + 3] - '1';
        boat_case_2[0] = str[line * POS_FILE_LINE_LEN + 5] - 'A';
        boat_case_2[1] = str[line * POS_FILE_LINE_LEN + 6] - '1';
        if (fill_boat(output, boat_len, boat_case_1, boat_case_2) == 1)
            return NULL;
    }
    free(str);
    return output;
}

void print_tab(tabcase **tab)
{
    my_putstr(" |A B C D E F G H\n-+---------------\n");
    for (int i = 0; i < 8; i++) {
        my_put_nbr(i + 1);
        my_putchar('|');
        for (int j = 0; j < 8; j++) {
            my_putchar(tab[i][j].display);
            my_putchar(' ');
        }
        my_putchar('\n');
    }
}