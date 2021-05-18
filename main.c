/*
** EPITECH PROJECT, 2020
** my_screensaver
** File description:
** main.c
*/

#include <stdlib.h>
#include "screensaver.h"
#include "my.h"

int check_anim_id(char **av)
{
    int count = 0;
    int MAX_ID = 4;
    int anim_id;

    while (av[1][count] != '\0') {
        if (av[1][count] >= '0' && av[1][count] <= '9')
            count++;
        else {
            my_putstr("Error, retry with an argument between 1 and MAX_ID.\n");
            return (EXIT_FAILURE);
        }
    }
    anim_id = my_getnbr(av[1]);
    if (anim_id <= 0 || anim_id > MAX_ID) {
        my_putstr("Error, retry with an argument between 1 and MAX_ID.\n");
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}

int main(int ac, char **av)
{
    int anim_id = check_anim_id(av);

    if (ac < 2) {
        error();
        return (EXIT_FAILURE);
    } else if (ac >= 3) {
        my_putstr("Too much arguments, 1 is required.\n");
        return (EXIT_FAILURE);
    }
    if (av[1][0] == '-') {
        if (av[1][1] == 'h') {
            helper();
            return (EXIT_SUCCESS);
        }
        else if (av[1][1] == 'd') {
            description();
            return (EXIT_SUCCESS);
        } else {
            my_putstr("invalid flag, retry with -h.\n");
            return (EXIT_FAILURE);
        }
    }
    anim_id = my_getnbr(av[1]);
    my_screensaver(anim_id);
    return (EXIT_SUCCESS);
}