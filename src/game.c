/*
** EPITECH PROJECT, 2020
** B-CPE-200-LYN-2-1-matchstick-morgan.ehni
** File description:
** game.c
*/

#include "../lib/my.h"

int checkpossible(char **map, int gameline, int matches)
{
    int count = 0;

    for (int i = 0; map[gameline][i] != '\0'; i++)
        if (map[gameline][i] == '|')
            count++;
    if (count < matches)
        return (0);
    else
        return (1);
}

int checkpipes(char **map, int i, int lines)
{
    int count = 0;

    for (int i = 0; i < lines + 2; i++)
        for (int j = 0; map[i][j] != '\0'; j++)
            if (map[i][j] == '|')
                count++;
    if (count == 0 && i % 2 == 0) {
        my_putstr("I lost... sniff... but I'll get you next time !!\n");
        return (1);
    }
    if (count == 0 && i % 2 == 1) {
        my_putstr("You lost, too bad...\n");
        return (2);
    }
    else
        return (0);
}

char **newmap(char **map, int a, int b)
{
    int count = 0;
    int i = my_strlen(map[a]) - 1;

    for (int j = i; j != 0; j--)
        if (count != b && map[a][j] == '|') {
            map[a][j] = ' ';
            count++;
        }
    return (map);
}