/*
** EPITECH PROJECT, 2018
** My Screensaver
** File description:
** my screensaver
*/

#include "my.h"
#include "framebuffer.h"

void	display_five(framebuffer_t *framebuffer)
{
    int	teta = 0;
    int	h = 300;
    int	k = 990;
    int	r = rand_y0();

    while (teta <= 1160) {
        int x = k + r * cos(teta);
        int y = h + r * sin(teta);
        my_put_pixel(framebuffer, x, y, sfRed);
        my_put_pixel(framebuffer, x , y + 100, sfBlue);
        my_put_pixel(framebuffer, x , y + 200, sfGreen);
        my_put_pixel(framebuffer, x , y + 300, sfMagenta);
        my_put_pixel(framebuffer, x , y + 400, sfYellow);
        teta = teta + 50;
    }
}

void	display_four(framebuffer_t *framebuffer)
{
    for (int a = 0; a < 1880; a++) {
        for (int b = 0; b < 920; b++) {
            my_put_pixel(framebuffer, a, b, sfTransparent);
        }
    }
    put_rectangle(framebuffer, 80, sfRed);
    put_rectangle(framebuffer, 20, sfMagenta);
    put_rectangle(framebuffer, 40, sfGreen);
    put_rectangle(framebuffer, 30, sfCyan);
    put_rectangle(framebuffer, 30, sfWhite);
    put_rectangle(framebuffer, 60, sfYellow);
    put_rectangle(framebuffer, 90, sfCyan);
    put_rectangle(framebuffer, 50, sfBlue);
}

void	display_three(framebuffer_t *framebuffer)
{
    int	i = 0;
    int	angle = rand_y0();
    int	x = rand_y0();
    int	y = 0;
    int	z = 0;

    while (i <= 300) {
        y = i * cos(angle);
        z = y * i * sin(angle);
        my_put_pixel(framebuffer, y + 250, z + 500, sfMagenta);
        my_put_pixel(framebuffer, y + 400, z + 500, sfBlack);
        my_put_pixel(framebuffer, y + 700, z + 500, sfMagenta);
        my_put_pixel(framebuffer, y + 1200, z + 500, sfMagenta);
        my_put_pixel(framebuffer, y + 1400, z + 500, sfBlack);
        my_put_pixel(framebuffer, y + 1600, z + 500, sfMagenta);
        i++;
    }
}

void	display_first(framebuffer_t *framebuffer)
{
    put_circle(framebuffer, rand_y0(), sfYellow);
    put_circle(framebuffer, rand_y0(), sfBlack);
    put_circle(framebuffer, rand_y0(), sfBlue);
    put_circle(framebuffer, rand_y0(), sfBlack);
}

int	display_h_d(char **av)
{
    if (av[1][1] == 'h') {
        usage_h();
    } else if (av[1][1] == 'd') {
        usage_d();
    } else {
        return (84);
    }
    return (0);
}
