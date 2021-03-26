/*
** EPITECH PROJECT, 2020
** B-CPE-200-LYN-2-1-matchstick-morgan.ehni
** File description:
** playgame.c
*/

#include "../lib/my.h"

int playerline(char **map, int maxnbr, int line)
{
    char *gline = NULL;
    size_t len = 0;
    ssize_t read = 0;

    my_putstr("Line: ");
    read = getline(&gline, &len, stdin);
    if (read == -1)
        return (-1);
    int i = my_getnbr(gline);
    if (i > line || i == 0) {
        my_putstr("Error: this line is out of range\n");
        int p = playerline(map, maxnbr, line);
        return (p);
    }
    if (i <= 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        int q = playerline(map, maxnbr, line);
        return (q);
    }
    return (i);
}

int playermatches(char **map, int m, int lines, int size)
{
    char *gline = NULL;
    size_t len = 0;
    ssize_t read = 0;

    my_putstr("Matches: ");
    read = getline(&gline, &len, stdin);
    if (read == -1)
        return (-1);
    int i = my_getnbr(gline);
    if (i > m) {
        my_putstr("Error: you cannot remove more than ");
        my_printf("%i matches per turn\n", m);
        play_game(map, m, lines, size);
    }
    if (i <= 0) {
        my_putstr("Error: invalid input (positive number expected)");
        play_game(map, m, lines, size);
    }
    return (i);
}

char **playing_ai(char **map, int maxnbr, int lines)
{
    int a = lines;
    int b = 1;

    my_putstr("\nAI's turn...\n");
    while (checkpossible(map, a, b) == 0)
        a--;
    map = newmap(map, a, b);
    my_printf("AI removed %i match(es) from line %i\n", b, a);
    return (map);
}

char **playing_player(char **map, int maxnbr, int lines, int size)
{
    char **error = NULL;

    int a = playerline(map, maxnbr, lines);
    int b = playermatches(map, maxnbr, lines, size);
    if (a == -1 || b == -1)
        return (error);
    if (checkpossible(map, a, b) == 0) {
        my_putstr("Error: not enough matches on this line\n");
        play_game(map, maxnbr, lines, size);
    }
    map = newmap(map, a, b);
    my_printf("Player removed %i match(es) from line %i\n", b, a);
    return (map);
}

int play_game(char **map, int maxnbr, int lines, int size)
{
    int i = 0;
    int j;

    while (1) {
        j = checkpipes(map, i, lines);
        if (j == 1 || j == 2)
            return (j);
        if (i % 2 == 0) {
            my_putstr("\nYour turn:\n");
            map = playing_player(map, maxnbr, lines, size);
            if (map == NULL)
                return (84);
            display_map(map, size);
        }
        if (i % 2 == 1) {
            map = playing_ai(map, maxnbr, lines);
            display_map(map, size);
        }
        i++;
    }
}