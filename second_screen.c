/*
** EPITECH PROJECT, 2018
** My Screensaver
** File description:
** my screensaver
*/

#include "my.h"
#include "framebuffer.h"

int	rand_y0(void)
{
    int	z = rand();

    while (z > 1880)
        z = rand();
    return (z);
}

int	rand_y1(void)
{
    int	z = rand();

    while (z > 920)
        z = rand();
    return (z);
}

void	usage_d(void)
{
    my_putstr("1: circles around a midpoint.\n");
    my_putstr("2: different galaxies.\n");
    my_putstr("3: sin and cos curves.\n");
    my_putstr("4: squares in different coordinates and size.\n");
    my_putstr("5: different color of lasers.\n");
    my_putstr("6: snowing and Christmas tree.\n");
    my_putstr("7: different length of lines waving.\n");
}

void	usage_h(void)
{
    my_putstr("animation rendering in a CSFML window.\n\n");
    my_putstr("USAGE\n");
    my_putstr(" ./my_screensaver [OPTIONS] animation_id\n");
    my_putstr(" animation_id    ID of the animation to process ");
    my_putstr("(between 1 and 7).\n\n");
    my_putstr("OPTIONS\n");
    my_putstr(" -d              print the description of all ");
    my_putstr("the animations and quit.\n");
    my_putstr(" -h              print the usage and quit.\n\n");
    my_putstr("USER INTERACTIONS\n");
    my_putstr(" LEFT_ARROW      switch to the previous animation.\n");
    my_putstr(" RIGHT_ARROW     switch to the next animation.\n");
}

void	put_circle(framebuffer_t *framebuffer,
                   int radius, sfColor color)
{
    circle_t	*c;

    c = circle(c);
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
        for(; c->err > 0; c->x--) {
            c->dx = c->dx + 2;
            c->err = c->err + c->dx - (radius << 1);
        }
    }
}
