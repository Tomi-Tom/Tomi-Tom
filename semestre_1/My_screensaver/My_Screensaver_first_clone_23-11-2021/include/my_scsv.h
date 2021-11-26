/*
** EPITECH PROJECT, 2021
** MY_SCSV_H
** File description:
** MY_SCSV_H
*/

#ifndef MY_SCSV_H
    #define MY_SCSV_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <stdarg.h>
    #include <string.h>
    #include <unistd.h>
    #include <stddef.h>

    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>

    #include <curses.h>

    #include <sys/types.h>
    #include <sys/stat.h>
    #include <sys/wait.h>
    #include <fcntl.h>

    #include "my_framebuffer.h"
    #include "my.h"

typedef struct all_s
{
    int width;
    int height;
    int bpp;
    int i;
    int j;
    int k;
    int l;
    int lim1;
    int lim2;
    int limite;
    int count;
    int more1;
    int more2;
    int more3;
    int more4;
    sfColor *color;
} all_t;

void window(int sv);
int main(int ac, char **av);

void poll_event(sfRenderWindow *window, sfEvent event);
sfColor generate_color(void);
sfColor generate_color2(void);
void free_everything(fb_t *fb, sfSprite *sprite, \
    sfTexture *tex, sfRenderWindow *window);
int clean_colum(fb_t *buffer, unsigned int x, unsigned int height);
int clean_line(fb_t *buffer, unsigned int width, unsigned int y);
sfColor *my_init_color(void);
all_t init_struct_all(void);
sfColor nuance_color(sfColor color, all_t *all);
sfColor set_color_black(void);
sfColor set_color_black2(void);
sfColor set_color_black3(void);
int setup_win(sfRenderWindow *window, sfTexture *tex, sfSprite *sprite);
void clean_fb(fb_t *fb, all_t all);
void clean_fb2(fb_t *fb, all_t all);

sfColor generate_color_red(void);
sfColor generate_color_green(void);
sfColor generate_color_blue(void);

void forward(all_t all, fb_t *fb);
void backward(all_t all, fb_t *fb);
void forward1(all_t all, fb_t *fb);
void backward1(all_t all, fb_t *fb);

all_t animation1(all_t all, fb_t *fb);
all_t animation2(all_t all, fb_t *fb);
all_t animation3(all_t all, fb_t *fb);
all_t animation4(all_t all, fb_t *fb);
all_t animation5(all_t all, fb_t *fb);
all_t animation6(all_t all, fb_t *fb);

#endif /* !MY_SCSV_H */
