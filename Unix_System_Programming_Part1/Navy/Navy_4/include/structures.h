/*
** EPITECH PROJECT, 2021
** navy
** File description:
** structures.h
*/

#ifndef STRUCTS_H
    #define STRUCTS_H

typedef struct tabcase {
    int isboat;
    int is_touched;
    char display;
} tabcase;

typedef struct gamestat {
    char *msg;
    int enemy_pid;
} gamestat;

extern gamestat *status;

typedef struct chained_text {
    char *text;
    struct chained_text *next;
} ctext;

#endif
