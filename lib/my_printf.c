/*
** EPITECH PROJECT, 2020
** B-CPE-200-LYN-2-1-matchstick-morgan.ehni
** File description:
** my_printf.c
*/

#include "my.h"

void my_printf(char const *s, ...)
{
    va_list list;

    va_start(list, s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '%') {
            if (s[i + 1] == 'c')
                my_putchar(va_arg(list, int));
            if (s[i + 1] == 's')
                my_putstr(va_arg(list, char *));
            if (s[i + 1] == 'i' || s[i + 1] == 'd')
                my_put_nbr(va_arg(list, int));
            if (s[i + 1] == 'b')
                convert(va_arg(list, int), 2);
            if (s[i + 1] == 'S')
                my_putoctalstr(va_arg(list, char *));
            i++;
        } else {
            my_putchar(s[i]);
        }
    }
    va_end(list);
}