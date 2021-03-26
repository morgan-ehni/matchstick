/*
** EPITECH PROJECT, 2020
** B-CPE-200-LYN-2-1-matchstick-morgan.ehni
** File description:
** malloc.c
*/

#include "../lib/my.h"

char **mapmalloc(int size)
{
    int x = 2 * size + 1;
    int y = size + 2;
    char **map = malloc(sizeof(char *) * y);

    for (int i = 0; i < y; i++) {
        map[i] = malloc(sizeof(char) * (x + 1));
        map[i][x] = '\0';
        for (int j = 0; j < x; j++)
            map[i][j] = ' ';
    }
    return (map);
}

char **fillsticks(char **map, int x, int y)
{
    int a = y - 2;
    int b = x - 1;
    int j = 1;
    int k = 1;

    for (int i = 0; i < y - 2; i++) {
        for (j; j < b; j++) {
            map[a][j] = '|';
        }
        k++;
        j = k;
        b--;
        a--;
    }
    return (map);
}

char **fillmap(char **map, int size)
{
    int x = 2 * size + 1;
    int y = size + 2;

    for (int i = 0; i != x; i++)
        map[0][i] = '*';
    for (int j = 0; j != x; j++)
        map[y - 1][j] = '*';
    for (int k = 1; k != y - 1; k++) {
        map[k][0] = '*';
        map[k][x - 1] = '*';
    }
    map = fillsticks(map, x, y);
    return (map);
}

void display_map(char **map, int size)
{
    int x = 2 * size + 1;
    int y = size + 2;

    for (int i = 0; i != y; i++)
        my_printf("%s\n", map[i]);
}