/*
** EPITECH PROJECT, 2020
** B-CPE-200-LYN-2-1-matchstick-morgan.ehni
** File description:
** error.c
*/

#include "../lib/my.h"

int error(int ac, char *stickmap, char *maxnbr)
{
    int a = my_getnbr(stickmap);
    int b = my_getnbr(maxnbr);

    if (ac != 3) {
        my_putstr("Must be 3 arguments.\n");
        return (0);
    }
    if (a <= 1 || a >= 100) {
        my_putstr("first argument : expected 1 < n < 100.\n");
        return (0);
    }
    if (b < 1) {
        my_putstr("you must at least remove 1 matchstick.\n");
        return (0);
    }
    return (1);
}