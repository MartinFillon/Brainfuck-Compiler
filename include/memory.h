/*
** EPITECH PROJECT, 2022
** brainfuck
** File description:
** memory
*/

#ifndef MEMORY_H_
    #define MEMORY_H_

typedef struct memory_s
{
    long int value;
}memory_t;

static memory_t MEMORY[100] = {
    {0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},
    {0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},
    {0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},
    {0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},
    {0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}
};

static const int MEMORY_MAX = 255;
static const int MEMORY_MIN = 0;
static const int POINTER_MAX = 99;
static const int POINTER_MIN = 0;
static int POINTER = POINTER_MIN;

#endif /* !MEMORY_H_ */
