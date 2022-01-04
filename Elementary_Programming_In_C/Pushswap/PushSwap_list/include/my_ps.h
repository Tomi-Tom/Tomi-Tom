/*
** EPITECH PROJECT, 2021
** my_project_h
** File description:
** my_project_h
*/

#ifndef my_ps_h
    #define my_ps_h

    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include "my.h"

typedef struct lis_s {
    int nb;
    struct lis_s *next;
} lis_t;

void push_swap(lis_t *l_a);
void operation(lis_t *l_a);
void my_sa(lis_t *l, int i);
void my_ra(lis_t *l_a, int i);

lis_t *init_elem(int nb);
void append_elem(lis_t *first, int nb);
void print_ll(lis_t *l);
int len_list(lis_t *l);
int list_is_sorted(lis_t *l);
lis_t *arr_to_linked_list(int *arr, int len);
int *params_to_arr(int ac, char **av);

#endif /* !my_ps_h */
