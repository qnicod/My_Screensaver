/*
** EPITECH PROJECT, 2020
** my_screensaver.c
** File description:
** star.c
*/

#include "math.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "../include/screensaver.h"
#include <stdlib.h>

sfRenderWindow *create_window(void)
{
    sfRenderWindow *window;
    sfVideoMode mode = {1920, 1080, 32};

    window = sfRenderWindow_create(mode, "Screensaver", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}

void my_screensaver(int anim_id)
{
    sfRenderWindow *window = create_window();
    sfEvent event;
    framebuffer_t *buffer = framebuffer_create(1920, 1080);
    sfTexture *texture = sfTexture_create(1920, 1080);
    sfSprite *sprite = sfSprite_create();

    while (sfRenderWindow_isOpen(window)) {
        sfTexture_updateFromPixels(texture, buffer->pixels, 1920, 1080, 0, 0);
        sfSprite_setTexture(sprite, texture, sfTrue);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
        switch_anim_id(buffer, anim_id);
    }
    sfRenderWindow_destroy(window);
    free(buffer);
}
