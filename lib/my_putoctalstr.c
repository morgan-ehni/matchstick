/*
** EPITECH PROJECT, 2020
** B-CPE-200-LYN-2-1-matchstick-morgan.ehni
** File description:
** my_putoctalstr.c
*/

#include "my.h"

int my_putoctalstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 32 && str[i] <127)
            my_putchar(str[i]);
        else {
            my_putchar('\\');
            convert(str[i], 8);
        }
        i++;
    }
    return (0);
}