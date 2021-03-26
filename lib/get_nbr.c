/*
** EPITECH PROJECT, 2020
** B-CPE-200-LYN-2-1-matchstick-morgan.ehni
** File description:
** get_nbr.c
*/

int my_is_number(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    int tmp;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            sign = sign * -1;
            i++;
        }
    }
    while (str[i] != '\0' && my_is_number(str[i])) {
        tmp = str[i] - 48;
        res = res * 10 + tmp;
        i++;
    }
    return (res * sign);
}