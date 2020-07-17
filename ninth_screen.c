/*
** EPITECH PROJECT, 2018
** My Screensaver
** File description:
** my screensaver
*/

#include "my.h"
#include "framebuffer.h"

rectangle_t	*rectangle(rectangle_t *r)
{
    r = malloc(sizeof(rectangle_t));
    r->x0 = rand_y0();
    r->y0 = rand_y1();
    r->y = 0;
    r->dx = 1;
    r->dy = 1;
    return (r);
}

rectangle_t	*rect(rectangle_t *r)
{
    if (r->err <= 0) {
        r->y++;
        r->err = r->err + r->dy;
        r->dy = r->dy + 2;
    }
    return (r);
}

rectangle_t	*create_of_rectangle(rectangle_t *r)
{
    r = malloc(sizeof(rectangle_t));
    r->x0 = 940;
    r->y0 = 460;
    r->y = 0;
    r->dx = 1;
    r->dy = 1;
    return (r);
}

rectangle_t	*little_rect(rectangle_t *r)
{
    r = malloc(sizeof(rectangle_t));
    r->x0 = 1035;
    r->y0 = 40;
    r->y = 0;
    r->dx = 1;
    r->dy = 1;
    return (r);
}
