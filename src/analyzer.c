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
    char c = '\n';
    write(1, &c, 1);
    show_memory();
    return 0;
}

int execute_bf(char *code, int *i)
{
    char command = code[*i];
    move_pointer(command);
    if (command == '+') {
        if (MEMORY[POINTER].value == MEMORY_MAX) {
            MEMORY[POINTER].value = MEMORY_MIN;
        } else {
            MEMORY[POINTER].value += 1;
        }
    }
    if (command == '-') {
        if (MEMORY[POINTER].value == MEMORY_MIN) {
            MEMORY[POINTER].value = MEMORY_MAX;
        } else {
            MEMORY[POINTER].value -= 1;
        }
    }
    if (command == '.') {
        char c = MEMORY[POINTER].value;
        write(1, &c, 1);
    }
    if (command == ',') {
        read(0, &MEMORY[POINTER].value, 1);
    }
    check_while(code, &*i);
    return 0;
}


int move_pointer(char command)
{
    if (command == '<') {
        if (POINTER == POINTER_MIN) {
            POINTER = POINTER_MAX;
        } else {
            POINTER -= 1;
        }
    }
    if (command == '>') {
        if (POINTER == POINTER_MAX) {
            POINTER = POINTER_MIN;
        } else {
            POINTER += 1;
        }
    }
    return 0;
}

int show_memory(void)
{
    printf("MEMORY:\n");
    int i = 0;
    POINTER = 0;
    for (;POINTER <= POINTER_MAX; POINTER++) {
        printf("%ld", MEMORY[POINTER].value);
        i += 1;
        if (POINTER != POINTER_MAX) {
            printf(",");
        }
        if (i % 20 == 0 && POINTER != POINTER_MIN) {
            printf("\n");
        }
    }
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