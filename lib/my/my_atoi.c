/*
** EPITECH PROJECT, 2020
** my_atoi.c
** File description:
** idk
*/

#include "my.h"

int my_atoi(char *str)
{
    int result = 0;
    int count;

    for (count = 0; str[count] != '\0'; count++) {
        result = result * 10;
        result = result + (str[count] - '0');
    }
    return (result);
}
