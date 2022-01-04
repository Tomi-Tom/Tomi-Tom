/*
** EPITECH PROJECT, 2021
** PONG_C
** File description:
** PONG_C
*/

#include "101pong.h"

pos_t init_pos(char **av, int p)
{
    pos_t pos;

    pos.x = atof(av[1 + (3 * (p - 1))]);
    pos.y = atof(av[2 + (3 * (p - 1))]);
    pos.z = atof(av[3 + (3 * (p - 1))]);
    return pos;
}

vector_t init_vector(pos_t p1, pos_t p2)
{
    vector_t vec;

    vec.x = p2.x - p1.x;
    vec.y = p2.y - p1.y;
    vec.z = p2.z - p1.z;
    return vec;
}

pos_t init_pos_zero(void)
{
    pos_t pos;

    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    return pos;
}

float angle(pos_t pos1, pos_t pos2, vector_t vec)
{
    float abs = sqrt(pow(vec.x, 2) + pow(vec.y, 2) + pow(vec.z, 2));
    float z = pos2.z - pos1.z;
    float ang = z / abs;
    ang = asin(ang);
    ang = fabs(ang);
    return (ang * (180.00 / M_PI));
}

void pong(char **arg)
{
    pos_t pos1 = init_pos(arg, 1);
    pos_t pos2 = init_pos(arg, 2);
    pos_t fin = init_pos(arg, 2);
    vector_t vec = init_vector(pos1, pos2);
    int i = 0;
    int rebond = 0;

    while (i < atoi(arg[7])) {
        fin.x = fin.x + vec.x;
        fin.y = fin.y + vec.y;
        fin.z = fin.z + vec.z;
        i++;
    }
    if ((fin.z < 0 && pos2.z > 0) || (fin.z > 0 && pos2.z < 0))
            rebond = 1;
    printf("The velocity vector of the ball is:\n");
    printf("(%.2f, %.2f, %.2f)\n", vec.x, vec.y, vec.z);
    printf("At time t + %d, ball coordinates will be:\n", atoi(arg[7]));
    printf("(%.2f, %.2f, %.2f)\n", fin.x, fin.y, fin.z);
    if (rebond == 1)
        printf("The incidence angle is:\n%.2f degrees\n", angle(pos1, pos2, vec));
    else
        printf("The ball won’t reach the paddle.\n");
}
