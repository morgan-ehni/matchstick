/*
** EPITECH PROJECT, 2020
** B-CPE-200-LYN-2-1-matchstick-morgan.ehni
** File description:
** my_revstr.c
*/

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char c;

    while (str[j] != '\0')
        j++;
    j = j - 1;
    while (j > i) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
    return (str);
}