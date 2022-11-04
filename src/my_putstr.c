/*
** EPITECH PROJECT, 2022
** brainfuck
** File description:
** my_putstr
*/

#include <stdio.h>
#include <unistd.h>

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}