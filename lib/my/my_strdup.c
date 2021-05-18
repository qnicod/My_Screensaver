/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** return a ptr on a new str (qui est dupliqué depuis src)
*/

#include "my.h"
#include <stdlib.h>

char *my_strdup(char const *src)
{
    int i = 0;
    int size = my_strlen(src);
    char *dest = malloc(sizeof(char) * (size + 1));

    while (src[i] != '\0') {
        i++;
        dest[i] = src[i];
    }
    return (dest);
}
