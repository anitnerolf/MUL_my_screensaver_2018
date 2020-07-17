/*
** EPITECH PROJECT, 2018
** My_Screensaver
** File description:
** my_putstr
*/

#include "my.h"
#include "framebuffer.h"

int	my_putstr(char const *str)
{
    int	i = 0;

    if (str != NULL) {
        while(str[i] != '\0') {
            my_putchar(str[i]);
            i++;
        }
    }
    return (0);
}
