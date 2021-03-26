/*
** EPITECH PROJECT, 2020
** B-CPE-200-LYN-2-1-matchstick-morgan.ehni
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}