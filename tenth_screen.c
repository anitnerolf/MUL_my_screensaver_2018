/*
** EPITECH PROJECT, 2018
** My Screensaver
** File description:
** my screensaver
*/

#include "my.h"
#include "framebuffer.h"

void	little_rectangle(framebuffer_t *framebuffer, int radius, sfColor color)
{
    rectangle_t	*r;

    r = little_rect(r);
    r->x = radius - 1;
    r->err = r->dx - (radius << 1);
    while (r->x >= r->y) {
        my_put_pixel(framebuffer, r->x0 + r->x, r->y0 + r->y, color);
        my_put_pixel(framebuffer, r->x0 + r->y, r->y0 + r->x, color);
        my_put_pixel(framebuffer, r->x0 - r->y, r->y0 + r->x, color);
        my_put_pixel(framebuffer, r->x0 - r->x, r->y0 + r->y, color);
	my_put_pixel(framebuffer, r->x0 - r->x, r->y0 - r->y, color);
        my_put_pixel(framebuffer, r->x0 - r->y, r->y0 - r->x, color);
        my_put_pixel(framebuffer, r->x0 + r->y, r->y0 - r->x, color);
        my_put_pixel(framebuffer, r->x0 + r->x, r->y0 - r->y, color);
        r = rect(r);
        r->x--;
        r->dx = r->dx + 2;
        r->err = r->err + r->dx - (radius << 1);
    }
}

void	create_rectangle(framebuffer_t *framebuffer, int radius, sfColor color)
{
    rectangle_t	*r;

    r = create_of_rectangle(r);
    r->x = radius - 1;
    r->err = r->dx - (radius << 1);
    while (r->x >= r->y) {
	my_put_pixel(framebuffer, r->x0 + r->x, r->y0 + r->y, color);
	my_put_pixel(framebuffer, r->x0 + r->y, r->y0 + r->x, color);
	my_put_pixel(framebuffer, r->x0 - r->y, r->y0 + r->x, color);
	my_put_pixel(framebuffer, r->x0 - r->x, r->y0 + r->y, color);
	my_put_pixel(framebuffer, r->x0 - r->x, r->y0 - r->y, color);
	my_put_pixel(framebuffer, r->x0 - r->y, r->y0 - r->x, color);
	my_put_pixel(framebuffer, r->x0 + r->y, r->y0 - r->x, color);
	my_put_pixel(framebuffer, r->x0 + r->x, r->y0 - r->y, color);
	r = rect(r);
        r->x--;
        r->dx = r->dx + 2;
        r->err = r->err + r->dx - (radius << 1);
    }
}

int	my_screensavers(int ac, char **av)
{
    framebuffer_t	*framebuffer = framebuffer_create(1880, 920);
    sfRenderWindow	*window;
    screen_t	*s;
    sfColor	color;

    window = createMyWindow(1880, 920);
    s = screen(s);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &s->event)) {
            if (s->event.type == sfEvtClosed ||
                (s->event.type == sfEvtKeyPressed &&
                 s->event.key.code == sfKeyEscape)) {
                sfRenderWindow_close(window);
                return (0);
            }
        }
        switch(av[1][0]) {
        case ('1'):
            display_first(framebuffer);
            break;
        case ('2'):
            display_second(framebuffer);
            break;
        case ('3'):
            display_three(framebuffer);
            break;
        case ('4'):
            display_four(framebuffer);
            break;
        case ('5'):
            display_five(framebuffer);
            break;
        case ('6'):
            display_six(framebuffer);
            break;
        case ('7'):
            display_seven(framebuffer);
            break;
        }
        sfRenderWindow_clear(window, sfBlack);
        sfTexture_updateFromPixels(s->texture, framebuffer->pixels,
                                   framebuffer->width,
                                   framebuffer->height, 0, 0);
        sfRenderWindow_drawSprite(window, s->sprite, NULL);
        sfRenderWindow_display(window);
    }
    destroy_tops(framebuffer, window);
    return (0);
}
