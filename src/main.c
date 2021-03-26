/*
** EPITECH PROJECT, 2020
** B-CPE-200-LYN-2-1-matchstick-morgan.ehni
** File description:
** main.c
*/

#include "../lib/my.h"

int main(int ac, char **av)
{
    int game;

    if (error(ac, av[1], av[2]) == 0)
        return (84);
    int size = my_getnbr(av[1]);
    int lines = my_getnbr(av[1]);
    int maxnbr = my_getnbr(av[2]);
    char **map = mapmalloc(size);
    map = fillmap(map, size);
    display_map(map, size);
    game = play_game(map, maxnbr, lines, size);
    if (game == 1)
        return (1);
    if (game == 2)
        return (2);
    if (game == 84) {
        my_putchar('\n');
        return (84);
    }
    return (0);
}