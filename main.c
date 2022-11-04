/*
** EPITECH PROJECT, 2022
** BRAINFUCK
** File description:
** main
*/
#include "include/bf_compiler.h"

int main(int argc, char const *argv[])
{
    if (argc > 1) {
        readfile(argv[1]);
    }
    return 0;
}
