/*
** EPITECH PROJECT, 2020
** B-CPE-200-LYN-2-1-matchstick-morgan.ehni
** File description:
** my.h
*/

#include <stdarg.h>
#include <stdlib.h>
#include "unistd.h"
#include <stdio.h>

void my_putstr(char *str);
int my_getnbr(char const *str);
int error(int ac, char *stickmap, char *maxnbr);
char *my_revstr(char *str);
int convert(int nb, int base);
void my_printf(char const *s, ...);
void my_putchar(char c);
int my_putoctalstr(char *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);
void display_map(char **map, int size);
char **fillmap(char **map, int size);
char **mapmalloc(int size);
int play_game(char **map, int maxnbr, int lines, int size);
char **newmap(char **map, int a, int b);
int checkpossible(char **map, int gameline, int matches);
int checkpipes(char **map, int i, int lines);