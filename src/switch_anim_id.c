/*
** EPITECH PROJECT, 2020
** my_screensaver
** File description:
** switch_id_anim.c
*/

#include "my.h"
#include "screensaver.h"

void switch_anim_id(framebuffer_t *buffer, int anim_id)
{
    switch (anim_id) {
    case 1 :
        draw_rand_space(buffer);
        break;
    case 2 :
        draw_rand_circle(buffer);
        break;
    case 3 :
        draw_lines(buffer);
        break;
    case 4 :
        draw_epileptic(buffer);
    }
}
