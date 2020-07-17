/*
** EPITECH PROJECT, 2018
** My Screensaver
** File description:
** my screensaver
*/

#include "my.h"
#include "framebuffer.h"

sfRenderWindow	*createMyWindow(unsigned int width, unsigned int height)
{
    sfRenderWindow	*window;
    sfVideoMode	video_mode;

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, "My Screensaver",
                                   sfClose, NULL);
    return (window);
}

framebuffer_t	*framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t	*arr = malloc(sizeof(framebuffer_t));
    arr->width = width;
    arr->height = height;
    arr->pixels = malloc(width * height * 4);
    return (arr);
}

void	draw_buffer(framebuffer_t *framebuffer, sfColor color)
{
    for (int i = 0; i < 1880; i++) {
        for (int j = 0; j < 920; j++) {
            my_put_pixel(framebuffer, i, j, color);
        }
    }
}

void	framebuffer_destroy(framebuffer_t *framebuffer)
{
    while (framebuffer != NULL) {
        if (framebuffer->pixels != NULL)
            free(framebuffer->pixels);
    }
    free(framebuffer);
}

int	my_put_pixel(framebuffer_t *framebuffer, unsigned int x,
                     unsigned int y, sfColor color)
{
    if (x > 1879 || y > 919 || x < 1 || y < 1) {
        return(84);
    }
    framebuffer->pixels[4*(y*framebuffer->width + x)] = color.r;
    framebuffer->pixels[4*(y*framebuffer->width + x) + 1] = color.g;
    framebuffer->pixels[4*(y*framebuffer->width + x) + 2] = color.b;
    framebuffer->pixels[4*(y*framebuffer->width + x) + 3] = color.a;
    return (0);
}
