/*
** EPITECH PROJECT, 2018
** My Screensaver
** File description:
** my screensaver
*/

#include "my.h"
#include "framebuffer.h"

snowman_t	*snowman(snowman_t *o)
{
    o = malloc(sizeof(snowman_t));
    o->x0 = 150;
    o->color = sfWhite;
    o->y = 0;
    o->dx = 1;
    o->dy = 1;
    return (o);
}

snowman_t	*the_variable(snowman_t *o)
{
    if (o->err <= 0) {
        o->y++;
        o->err = o->err + o->dy;
        o->dy = o->dy + 2;
    }
    return (o);
}

void	snowman_circle(framebuffer_t *framebuffer, int y0, int radius)
{
    snowman_t	*o;

    o = snowman(o);
    o->x = radius - 1;
    o->err = o->dx - (radius << 1);
    while (o->x >= o->y) {
        my_put_pixel(framebuffer, o->x0 + o->x, y0 + o->y, o->color);
        my_put_pixel(framebuffer, o->x0 + o->y, y0 + o->x, o->color);
        my_put_pixel(framebuffer, o->x0 - o->y, y0 + o->x, o->color);
        my_put_pixel(framebuffer, o->x0 - o->x, y0 + o->y, o->color);
        my_put_pixel(framebuffer, o->x0 - o->x, y0 - o->y, o->color);
	my_put_pixel(framebuffer, o->x0 - o->y, y0 - o->x, o->color);
        my_put_pixel(framebuffer, o->x0 + o->y, y0 - o->x, o->color);
        my_put_pixel(framebuffer, o->x0 + o->x, y0 - o->y, o->color);
        o = the_variable(o);
        for (; o->err > 0; o->x--) {
            o->dx = o->dx + 2;
            o->err = o->err + o->dx - (radius << 1);
        }
    }
}
