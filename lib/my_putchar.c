/*
** EPITECH PROJECT, 2020
** B-CPE-200-LYN-2-1-matchstick-morgan.ehni
** File description:
** my_putchar.c
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}