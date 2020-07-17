/*
** EPITECH PROJECT, 2018
** My Screensaver
** File description:
** my screensaver
*/

#include "my.h"
#include "framebuffer.h"

circles_t	*circles(circles_t *x)
{
    x = malloc(sizeof(circles_t));
    x->y0 = 530;
    x->radius = 8;
    x->color = sfWhite;
    x->y = 0;
    x->x = x->radius - 1;
    x->err = x->dx - (x->radius << 1);
    x->dx = 1;
    x->dy = 1;
    return (x);
}

circles_t	*my_variable(circles_t *x)
{
    if (x->err <= 0) {
        x->y++;
        x->err = x->err + x->dy;
        x->dy = x->dy + 2;
    }
    return (x);
}

void	create_circle(framebuffer_t *framebuffer, int x0)
{
    circles_t	*x;

    x = circles(x);
    while (x->x >= x->y) {
        my_put_pixel(framebuffer, x0 + x->x, x->y0 + x->y, x->color);
        my_put_pixel(framebuffer, x0 + x->y, x->y0 + x->x, x->color);
        my_put_pixel(framebuffer, x0 - x->y, x->y0 + x->x, x->color);
        my_put_pixel(framebuffer, x0 - x->x, x->y0 + x->y, x->color);
        my_put_pixel(framebuffer, x0 - x->x, x->y0 - x->y, x->color);
	my_put_pixel(framebuffer, x0 - x->y, x->y0 - x->x, x->color);
        my_put_pixel(framebuffer, x0 + x->y, x->y0 - x->x, x->color);
        my_put_pixel(framebuffer, x0 + x->x, x->y0 - x->y, x->color);
        x = my_variable(x);
        for (; x->err > 0; x->x--) {
            x->dx = x->dx + 2;
            x->err = x->err + x->dx - (x->radius << 1);
        }
    }
}
