/*
** EPITECH PROJECT, 2020
** my_screensaver
** File description:
** screensaver.h
*/

#ifndef SCREENSAVER_H_
#define SCREENSAVER_H_

#include <SFML/Graphics.h>

typedef struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
} framebuffer_t;

int error(void);
int helper(void);
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
int my_put_pixels(framebuffer_t *bf, unsigned int x, unsigned y, sfColor c);
int draw_circle(framebuffer_t *buffer, sfVector2i center, int rad);
sfVector2i set_cube(void);
sfVector2i calc_cube(sfVector2i centre);
void draw_rand_space(framebuffer_t *buffer);
void my_screensaver(int anim_id);
int set_draw_circle(framebuffer_t *buffer, sfVector2i center, int rad);
int draw_rand_circle(framebuffer_t *buffer);
void switch_anim_id(framebuffer_t *buffer, int anim_id);
void draw_lines(framebuffer_t *buffer);
int check_anim_id(char **av);
void description();
sfColor get_random_color();
void draw_epileptic(framebuffer_t *buffer);
#endif
