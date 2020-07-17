/*
** EPITECH PROJECT, 2018
** My Screensaver
** File description:
** my screensaver
*/

#include "my.h"
#include "framebuffer.h"

void	display_second(framebuffer_t *framebuffer)
{
    for (int a = 0; a < 939; a = a + 5) {
        for (int b = 0; b < 460; b = b + 5) {
            my_put_pixel(framebuffer, a, b, sfBlue);
        }
    }
    for (int a = 940; a < 1880; a = a + 5) {
        for (int b = 460; b < 920; b = b + 5) {
            my_put_pixel(framebuffer, a, b, sfCyan);
        }
    }
    create_rectangle(framebuffer, rand_y0(), sfBlue);
    create_rectangle(framebuffer, rand_y0(), sfBlack);
    create_rectangle(framebuffer, rand_y0(), sfCyan);
    my_put_pixel(framebuffer, rand_y0(), rand_y1(), sfWhite);
    my_put_pixel(framebuffer, rand_y0(), rand_y1(), sfYellow);
    my_put_pixel(framebuffer, rand_y0(), rand_y1(), sfMagenta);
    my_put_pixel(framebuffer, rand_y0(), rand_y1(), sfMagenta);
}

void	display_seven(framebuffer_t *framebuffer)
{
    int	i = 0;
    int	angle = rand_y0();
    int	x = rand_y0();
    int	y = 0;
    int	z = 0;

    while (i <= 100) {
        y = x + i * sin(angle) - 10;
        z = i * cos(angle) - 20;
        my_put_pixel(framebuffer, x + 1, z + 280, sfYellow);
        my_put_pixel(framebuffer, x + 1, z + 200, sfBlack);
        my_put_pixel(framebuffer, x + 1, z + 480, sfRed);
        my_put_pixel(framebuffer, x + 1, z + 400, sfBlack);
        my_put_pixel(framebuffer, x + 1, z + 880, sfBlue);
        my_put_pixel(framebuffer, x + 1, z + 600, sfBlack);
        my_put_pixel(framebuffer, x + 1, z + 680, sfCyan);
        my_put_pixel(framebuffer, x + 1, z + 800, sfBlack);
        my_put_pixel(framebuffer, x + 1, z + 80, sfMagenta);
        i++;
    }
}

void	six_screen(framebuffer_t *framebuffer)
{
    my_put_pixel(framebuffer, rand_y0(), rand_y1(), sfWhite);
    my_put_pixel(framebuffer, rand_y0(), rand_y1(), sfWhite);
    my_put_pixel(framebuffer, rand_y0(), rand_y1(), sfWhite);
    my_put_pixel(framebuffer, rand_y0(), rand_y1(), sfWhite);
    red_circle(framebuffer, 8, sfRed);
    create_circle(framebuffer, 130);
    create_circle(framebuffer, 170);
    snowman_circle(framebuffer, 710, 8);
    snowman_circle(framebuffer, 840, 8);
    snowman_circle(framebuffer, 770, 150);
    snowman_circle(framebuffer, 540, 80);
}

void	display_six(framebuffer_t *framebuffer)
{
    int	teta = 0;
    int	h = 990;
    int	k = 0;
    int	r = rand_y0();

    while (teta <= 360) {
        int x = h + r * cos(teta);
        int y = k + r * sin(teta);
        little_rectangle(framebuffer, 10, sfYellow);
        my_put_pixel(framebuffer, x + 45, r + 45, sfCyan);
        my_put_pixel(framebuffer, x + 50, r + 50, sfRed);
        teta = teta + 10;
    }
    six_screen(framebuffer);
}
