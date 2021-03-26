/*
** EPITECH PROJECT, 2020
** B-CPE-200-LYN-2-1-matchstick-morgan.ehni
** File description:
** my_putstr.c
*/

#include "my.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(1, &str[i], 1);
}