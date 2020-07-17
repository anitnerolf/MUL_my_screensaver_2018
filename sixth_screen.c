/*
** EPITECH PROJECT, 2018
** My Screensaver
** File description:
** my screensaver
*/

#include "my.h"
#include "framebuffer.h"

circle_t	*circle(circle_t *c)
{
    c = malloc(sizeof(circle_t));
    c->x0 = 940;
    c->y0 = 460;
    c->y = 0;
    c->dx = 1;
    c->dy = 1;
    return (c);
}

circle_t	*first_variable(circle_t *c)
{
    if (c->err <= 0) {
        c->y++;
        c->err = c->err + c->dy;
        c->dy = c->dy + 2;
    }
    return (c);
}

circle_t	*red_first(circle_t *c)
{
    c = malloc(sizeof(circle_t));
    c->x0 = 150;
    c->y0 = 550;
    c->y = 0;
    c->dx = 1;
    c->dy = 1;
    return (c);
}

void	red_circle(framebuffer_t *framebuffer, int radius, sfColor color)
{
    circle_t	*c;

    c = red_first(c);
    c->x = radius - 1;
    c->err = c->dx - (radius << 1);
    while (c->x >= c->y) {
        my_put_pixel(framebuffer, c->x0 + c->x, c->y0 + c->y, color);
        my_put_pixel(framebuffer, c->x0 + c->y, c->y0 + c->x, color);
        my_put_pixel(framebuffer, c->x0 - c->y, c->y0 + c->x, color);
        my_put_pixel(framebuffer, c->x0 - c->x, c->y0 + c->y, color);
        my_put_pixel(framebuffer, c->x0 - c->x, c->y0 - c->y, color);
	my_put_pixel(framebuffer, c->x0 - c->y, c->y0 - c->x, color);
        my_put_pixel(framebuffer, c->x0 + c->y, c->y0 - c->x, color);
        my_put_pixel(framebuffer, c->x0 + c->x, c->y0 - c->y, color);
        c = first_variable(c);
        for (; c->err > 0; c->x--) {
            c->dx = c->dx + 2;
            c->err = c->err + c->dx - (radius << 1);
        }
    }   
}
