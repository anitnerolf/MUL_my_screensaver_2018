/*
** EPITECH PROJECT, 2018
** framebuffer
** File description:
** framebuffer
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stddef.h>

#ifndef	FRAMEBUFFER_H_
#define FRAMEBUFFER_H_

#include <SFML/Graphics.h>

typedef struct framebuffer {
    unsigned	int	width;
    unsigned	int	height;
    sfUint8	*pixels;
} framebuffer_t;

framebuffer_t	*framebuffer_create(unsigned int width, unsigned int height);
void	framebuffer_destroy(framebuffer_t *framebuffer);
//void	my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color);

#endif /* FRAMEBUFFER_H_ */
