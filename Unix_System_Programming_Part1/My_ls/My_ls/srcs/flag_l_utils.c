/*
** EPITECH PROJECT, 2021
** FLAG_L_UTIL_C
** File description:
** display function for -l
*/

#include "my_ls.h"

void display_link(char *file)
{
    struct stat stock;

    stat(file, &stock);
    my_put_nbr(stock.st_nlink);
    write(1, " ", 1);
}

void display_grp_usr_name(char *file)
{
    struct stat st;
    struct passwd *ps;
    struct group *gp;

    stat(file, &st);
    ps = getpwuid(st.st_uid);
    gp = getgrgid(st.st_gid);
    my_putstr(ps->pw_name);
    write(1, " ", 1);
    my_putstr(gp->gr_name);
    write(1, " ", 1);
}

void display_time(char *file)
{
    struct stat stock;

    stat(file, &stock);
    write(1, (ctime(&stock.st_mtime) + 4), \
        (my_strlen(ctime(&stock.st_mtime)) - 13));
}

void display_auth(char *file)
{
    struct stat stock;

    stat(file, &stock);
    write(1, S_ISDIR(stock.st_mode) ? "d" : (S_ISCHR(stock.st_mode) ?\
        "c" : (S_ISBLK(stock.st_mode) ? "b" : (S_ISLNK(stock.st_mode) ?\
        "l" : (S_ISSOCK(stock.st_mode) ? "s" : "-")))), 1);
    write(1, (stock.st_mode & S_IRUSR) ? "r" : "-", 1);
    write(1, (stock.st_mode & S_IWUSR) ? "w" : "-", 1);
    write(1, (stock.st_mode & S_IXUSR) ? "x" : "-", 1);
    write(1, (stock.st_mode & S_IRGRP) ? "r" : "-", 1);
    write(1, (stock.st_mode & S_IWGRP) ? "w" : "-", 1);
    write(1, (stock.st_mode & S_IXGRP) ? "x" : "-", 1);
    write(1, (stock.st_mode & S_IROTH) ? "r" : "-", 1);
    write(1, (stock.st_mode & S_IWOTH) ? "w" : "-", 1);
    write(1, (stock.st_mode & S_IXOTH) ? "x" : "-", 1);
    write(1, " ", 1);
}

void display_size(char *file)
{
    struct stat st;

    stat(file, &st);
    my_put_nbr(st.st_size);
    my_putchar(' ');
}