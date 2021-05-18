/*
** EPITECH PROJECT, 2020
** my_screensaver
** File description:
** set_pixels.c
*/

#include <SFML/Graphics.h>
#include "screensaver.h"
#include <stdlib.h>

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *ptr = malloc(sizeof(framebuffer_t));

    ptr->height = height;
    ptr->width = width;
    ptr->pixels = malloc(sizeof(sfUint8) * width * height * 4);
    return (ptr);
}

int my_put_pixels(framebuffer_t *bf, unsigned int x, unsigned int y, sfColor c)
{
    if (x < 1920 && y < 1080) {
        x *= 4;
        y *= 4;
        bf->pixels[bf->width * y + x + 0] = c.r;
        bf->pixels[bf->width * y + x + 1] = c.g;
        bf->pixels[bf->width * y + x + 2] = c.b;
        bf->pixels[bf->width * y + x + 3] = c.a;
    }
    return (1);
}

sfColor get_random_color()
{
    sfColor color;

    color.r = rand() % 255;
    color.g = rand() % 255;
    color.b = rand() % 255;
    color.a = rand () % 25;
    return (color);
}
