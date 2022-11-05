/*
** EPITECH PROJECT, 2022
** brainfuck
** File description:
** reader
*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include "../include/bf_compiler.h"

int readfile(const char *path)
{
    char buff[30000 + 1];
    int offset = 0;
    int len ;
    int fd = open(path, O_RDONLY);
    while ((len = read(fd , buff + offset , 30000 - offset)) > 0) {
        offset = offset + len;
    }
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    return compile(buff);
}
