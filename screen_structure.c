/*
** EPITECH PROJECT, 2018
** My screensaver
** File description:
** my screensaver
*/

#include "my.h"

screen_t	*screen(screen_t *s)
{
    framebuffer_t	*framebuffer;
    s = malloc(sizeof(screen_t));
    s->texture = sfTexture_create(1880, 920);
    s->sprite = sfSprite_create();
    sfSprite_setTexture(s->sprite, s->texture, sfTrue);
    sfTexture_updateFromPixels(s->texture, framebuffer->pixels,
                               framebuffer->width, framebuffer->height, 0, 0);
    return (s);
}
