/*
** EPITECH PROJECT, 2020
** B-CPE-200-LYN-2-1-matchstick-morgan.ehni
** File description:
** my_put_nbr.c
*/

#include "my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    } if (nb <= 9) {
        my_putchar(nb + 48);
    } else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);
}