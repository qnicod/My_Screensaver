/*
** EPITECH PROJECT, 2020
** my_screensaver.c
** File description:
** settings.c
*/

#include <stdlib.h>
#include "../include/my.h"

int error(void)
{
    my_putstr("./my_screensave: bad arguments: 0 given but 1 is required\n");
    my_putstr("retry with -h\n");
    return (EXIT_FAILURE);
}

int helper(void)
{
    my_putstr("animation rendering in a CSFML window.\n\n");
    my_putstr("USAGE\n");
    my_putstr(" ./my_screensaver [OPTIONS] animation_id\n");
    my_putstr(" animation_id     ID of the animation to process");
    my_putstr(" (between 1 and 20).\n\n");
    my_putstr("OPTIONS\n -d");
    my_putstr("               print the description of all the animations");
    my_putstr(" and quit.\n -h               print the usage and quit.\n\n");
    my_putstr("USER INTERCTIONS\n  LEFT_ARROW      ");
    my_putstr("switch to the previous animatio.\n  RIGH_ARROW");
    my_putstr("      switch to the next animation.\n\n");
    return (0);
}

int description(void)
{
    my_putstr("1: It's the space with random pixels\n");
    my_putstr("2: It's many circle with random circle and colors!\n");
    my_putstr("3: It's many diagonale, horizontal and random pixels lines\n");
    my_putstr("4: Warning! It's a circus circle.\n");
    return (0);
}
