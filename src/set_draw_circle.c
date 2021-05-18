/*
** EPITECH PROJECT, 2020
** my_screensaver
** File description:
** draw_circle.c
*/

#include <math.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "../include/screensaver.h"
#include "my.h"

int set_draw_circle(framebuffer_t *buffer, sfVector2i c, int rad)
{
    int i;
    int j;
    sfColor color = get_random_color();

    for (i = c.y-rad; i <= c.y+rad; i++) {
        for (j = c.x-rad; j <= c.x+rad; j++) {
            if ((my_pow(j - c.x, 2) + my_pow(i - c.y, 2)) <= my_pow(rad, 2))
                my_put_pixels(buffer, j, i, color);
        }
    }
    return (0);
}
