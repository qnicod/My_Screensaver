/*
** EPITECH PROJECT, 2020
** my_screensaver
** File description:
** anim_id.c
*/

#include "math.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "../include/screensaver.h"
#include <stdlib.h>

void draw_rand_space(framebuffer_t *buffer)
{
    int x = rand() % 1920;
    int y = rand() % 1080;
    sfColor color = get_random_color();
    my_put_pixels(buffer, x, y, color);
}

int draw_rand_circle(framebuffer_t *buffer)
{
    sfVector2i center;
    int rad = rand() % 40;

    center.x = rand() % 1920;
    center.y = rand() % 1080;
    set_draw_circle(buffer, center, rad);
    return (0);
}

void draw_lines(framebuffer_t *buffer)
{
    int x = rand() % 1920;
    int y = rand() % 1080;
    int line = rand() % 150;
    int direction = rand() % 5;
    sfColor color = get_random_color();
    int temp_var;

    temp_var = x;
    while ( x != temp_var + line) {
        my_put_pixels(buffer, x, y, color);
        if (direction == 0)
            x += 1;
        else {
            x += 1;
            y += 1;
        }
    }
}

void draw_epileptic(framebuffer_t *buffer)
{
    sfVector2i center = {1920 / 2, 1080 / 2};
    int rad = rand() % 550;

    set_draw_circle(buffer, center, rad);
}