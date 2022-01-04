/*
** EPITECH PROJECT, 2021
** my_project_h
** File description:
** my_project_h
*/

#ifndef MY_RUNNER_H
    #define MY_RUNNER_H

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

    #define ABS(value) ((value) < 0 ? -(value) : (value))

typedef struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
} fb_t;

typedef struct mus_s {
    char *path;
    sfMusic *music;
} mus_t;

typedef struct obj_s {
    char *path;
    int nb_frame;
    sfSprite *sprite;
    sfTexture *tex;
    sfVector2f *vec;
    sfIntRect rect;
} obj_t;

typedef struct all_s {
    int quit;
    int width;
    int height;
    int bpp;
    int jump;
    int perso;
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    sfColor color;
    obj_t *bg;
    obj_t *menu;
    obj_t *ground;
    obj_t *heros;
    obj_t *pause;
    obj_t *utils;
    obj_t *world;
    mus_t *intro;
    mus_t *lvl;
} all_t;

int main(int ac, char **av);

void window(void);

void my_putstr(char const *str);
char *my_strdup(char const *src);

fb_t *framebuffer_create(unsigned int width, unsigned int height);
void clean_fb(fb_t *fb, all_t all);
void render_win(fb_t *fb, sfTexture *tex, sfSprite *sprite, all_t a);

void animation_begining(sfRenderWindow *window, all_t a, fb_t *fb);
void animation_creator(sfRenderWindow *window, all_t a, fb_t *fb);

all_t init_setup(void);
all_t setup_option(all_t a);

int poll_event(all_t a);
int poll_event_game(all_t a);

void display(all_t a);
void display_menu(all_t a);
all_t overlay_menu(all_t a);
all_t display_pause(all_t a);
all_t vector_trans(all_t a);
int choose_menu(all_t a);
int check_button(all_t a, sfMouseButton b, sfVector2f mouse);
all_t choose_hero(all_t a);
all_t check_click(all_t a, sfMouseButton b, sfVector2f mouse);

all_t init_obj(all_t a);
all_t init_all_bg(all_t a);
all_t init_all_menu(all_t a);
all_t init_menu2(all_t a);
all_t init_all_pause(all_t a);
all_t init_all_ground(all_t a);
all_t init_all_heros(all_t a);
all_t init_all_utils(all_t a);
all_t init_all_music(all_t a);

all_t init_pause_leave_press(all_t a);

all_t game_launch(all_t a);
all_t begining(all_t a);
all_t display_bg(all_t a, sfColor color);
all_t display_ground(all_t a, sfColor color);
all_t display_heros(all_t a, sfColor color);

void free_all(all_t a, fb_t *fb);

#endif /* !MY_RUNNER_H */
