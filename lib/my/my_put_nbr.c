/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** displays number
*/

#include "my.h"

int my_put_nbr(int nb)
{
    char numchar = 48;
    int modulo = nb;

    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return (0);
    }
    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
        modulo = nb;
        return (my_put_nbr(nb));
    }
    if (nb >= 10) {
        modulo %= 10;
        numchar += modulo;
        my_putchar(numchar);
        return (0);
    }
}