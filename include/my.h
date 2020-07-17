/*
** EPITECH PROJECT, 2018
** My screensaver
** File description:
** My screensaver
*/

#ifndef MY_H_
#define MY_H_

#include "framebuffer.h"
#include "my.h"
#include <math.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

typedef struct screen
{
    sfEvent	event;
    sfSprite	*sprite;
    sfTexture	*texture;
} screen_t;

typedef	struct circle
{
    int x;
    int y;
    int x0;
    int y0;
    int dx;
    int dy;
    int err;
} circle_t;

typedef struct  circles
{
    int x;
    int y;
    int radius;
    sfColor     color;
    int y0;
    int dx;
    int dy;
    int err;
} circles_t;

typedef struct  snowman
{
    int x;
    int y;
    sfColor     color;
    int x0;
    int dx;
    int dy;
    int err;
} snowman_t;

typedef struct  rectangle
{
    int x;
    int y;
    int x0;
    int y0;
    int dx;
    int dy;
    int err;
} rectangle_t;

screen_t	*screen(screen_t *s);
circle_t	*circle(circle_t *c);
circle_t	*first_variable(circle_t *c);
circle_t	*red_first(circle_t *c);
circles_t	*circles(circles_t *x);
circles_t	*my_variable(circles_t *x);
snowman_t	*snowman(snowman_t *o);
snowman_t	*the_variable(snowman_t *o);
rectangle_t	*rectangle(rectangle_t *r);
rectangle_t	*rect(rectangle_t *r);
rectangle_t	*create_of_rectangle(rectangle_t *r);
rectangle_t	*little_rect(rectangle_t *r);
sfRenderWindow	*createMyWindow(unsigned int width, unsigned int height);
framebuffer_t	*framebuffer_create(unsigned int width, unsigned int height);
void	draw_buffer(framebuffer_t *framebuffer, sfColor color);
void	framebuffer_destroy(framebuffer_t *framebuffer);
int	my_put_pixel(framebuffer_t *framebuffer, unsigned int x,
                     unsigned int y, sfColor color);
int	rand_y0();
int	rand_y1();
void	usage_d(void);
void	usage_h(void);
void	put_line(framebuffer_t *framebuffer, sfColor color, int x0, int x1);
void	put_circle(framebuffer_t *framebuffer, int radius, sfColor color);
void	red_circle(framebuffer_t *framebuffer, int radius, sfColor color);
void	snowman_circle(framebuffer_t *framebuffer, int y0, int radius);
void	create_circle(framebuffer_t *framebuffer, int x0);
void	put_rectangle(framebuffer_t *framebuffer, int radius, sfColor color);
void	little_rectangle(framebuffer_t *framebuffer, int radius, sfColor color);
void	create_rectangle(framebuffer_t *framebuffer, int radius, sfColor color);
void	display_six(framebuffer_t *framebuffer);
void	six_screen(framebuffer_t *framebuffer);
int	my_put_2_line(framebuffer_t *framebuffer, sfColor color, int x0, int x1);
int	my_put_line(framebuffer_t *framebuffer, sfColor color, int x0, int x1);
void	display_second(framebuffer_t *framebuffer);
void	display_five(framebuffer_t *framebuffer);
void	display_four(framebuffer_t *framebuffer);
void	destroy_tops(framebuffer_t *framebuffer, sfRenderWindow *window);
void	display_three(framebuffer_t *framebuffer);
int	display_h_d(char **av);
void	my_putchar(char c);
int	my_putstr(char const *str);
void	display_screen(char **av);
void	display_first(framebuffer_t *framebuffer);
void	display_seven(framebuffer_t *framebuffer);
int	my_screensavers(int ac, char **av);

#endif /* MY_H_ */
