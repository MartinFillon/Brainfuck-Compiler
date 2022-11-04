/*
** EPITECH PROJECT, 2022
** brainfuck
** File description:
** initiatilsator
*/

#include "../include/bf_compiler.h"
#include "../include/memory.h"
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

int compile(char *code)
{
    for (int i = 0; i < my_strlen(code); i++) {
        execute_bf(code, &i);
    }
    return 0;
}

int execute_bf(char *code, int *i)
{
    char command = code[*i];
    if (command == '<')
        POINTER -= 1;
    if (command == '>')
        POINTER += 1;
    if (command == '+')
        MEMORY[POINTER].value += 1;
    if (command == '-')
        MEMORY[POINTER].value -= 1;
    if (command == '.') {
        char c = MEMORY[POINTER].value;
        write(1, &c, 1);
    }
    check_while(code, &*i);
    return 0;
}

int check_while(char *code, int *i)
{
    int start;
    if (code[*i] == '[') {
        start = *i;
        *i += 1;
        execute_while(code, &*i, start);
    }
    return 0;
}

int execute_while(char *code, int *i, int start)
{
    while (code[*i] != ']') {
        execute_bf(code, &*i);
        *i += 1;
    }
    if (MEMORY[POINTER].value != 0) {
        *i = start;
        execute_bf(code, &*i);
    }
    return 0;
}