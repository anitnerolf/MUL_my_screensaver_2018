/*
** EPITECH PROJECT, 2018
** My Screensaver
** File description:
** my screensaver
*/

#include "my.h"
#include "framebuffer.h"

void	put_rectangle(framebuffer_t *framebuffer, int radius, sfColor color)
{
    rectangle_t	*r;

    r = rectangle(r);
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

void	destroy_tops(framebuffer_t *framebuffer, sfRenderWindow *window)
{
    screen_t	*s;

    framebuffer_destroy(framebuffer);
    sfSprite_destroy(s->sprite);
    sfTexture_destroy(s->texture);
    sfRenderWindow_destroy(window);
}

int	main(int ac, char **av)
{
    if (ac == 2) {
        if ((av[1][0] == '1' || av[1][0] == '2' || av[1][0] == '3' ||
             av[1][0] == '4' || av[1][0] == '6' || av[1][0] == '5' ||
             av[1][0] == '7') && !av[1][1]) {
            my_screensavers(ac, av);
        } else if (av[1][0] = '-') {
            display_h_d(av);
        }
        else
            return (84);
    }
    return (84);
}
