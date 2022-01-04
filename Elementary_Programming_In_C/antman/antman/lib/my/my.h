/*
** EPITECH PROJECT, 2021
** MY_H
** File description:
** all for include my libc
*/

#ifndef MY_H
    #define MY_H

/*====================================================*/
/*======================[STRUCT]======================*/
/*====================================================*/


typedef struct lis_s
{
    int nb;
    struct lis_s *next;
} lis_t;


/*====================================================*/
/*======================[MACROS]======================*/
/*====================================================*/


#define ATOD(x) x = x - '0'
#define DTOA(x) x = x + '0'

#define ABS(x) ((x < 0) ? -(x) : (x))


/*====================================================*/
/*=====================[FUNCTION]=====================*/
/*====================================================*/


/*======================[MY_PUT]======================*/

void my_putchar(char c);

void my_putstr(char const *str);
void my_puterror(char const *str);

int my_put_nbr(int nb);
int my_putnbr_base(int nbr, char const *base);

/*======================[MY_LEN]======================*/

int my_strlen(char const *str);
int my_nbrlen(int nb);
int my_strlen_base(char const *str);

/*=================[MY_IS_SOMETHING]==================*/

int my_isneg(int nb);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_is_num(char c);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_is_prime(int nb);

/*=================[MY_LINKED_LIST]===================*/

lis_t *init_elem(int nb);
void append_elem(lis_t *first, int nb);
void print_ll(lis_t *l);
int len_list(lis_t *l);
int list_is_sorted(lis_t *l);

/*==================[MY_RECUP_VAR]====================*/

int my_getnbr(char const *str);

/*=================[MY_CONVERSION]====================*/

char *my_itoa(int nb);
char **my_str_to_word_array(char const *str);

/*==================[MY_POINTEURS]====================*/

void my_swap(int *a, int *b);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);

/*=====================[MY_SORT]======================*/

void my_sort_int_array(int *tab, int size);

/*====================[MY_MATHS]======================*/

int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);

int my_find_prime_sup(int nb);

int my_modulo(int x, int y);
int do_op(int nb1, int nb2, char op);

/*==================[MY_TRANS_STR]====================*/

char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);

char *my_revstr(char *str);

char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int n);

/*==================[MY_TESTS_STR]====================*/

char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);

/*====================[MY_MALLOC]=====================*/

char *my_strdup(char const *src);

/*====================[MY_OTHER]======================*/

int my_showstr(char const *str);
int my_showmem(char const *str, int size);
int count(char *str);
int compare(char act, char bef);
int my_strlendup(char const *str);

#endif
