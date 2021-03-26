/*
** EPITECH PROJECT, 2020
** B-CPE-200-LYN-2-1-matchstick-morgan.ehni
** File description:
** conversion.c
*/

#include "my.h"

int convert(int nb, int base)
{
    int i = 0;
    char nbr[33];

    while (nb != 0) {
        nbr[i] = nb % base + '0';
        i++;
        nb = nb / base;
    }
    my_revstr(nbr);
    my_putstr(nbr);
    return (0);
}