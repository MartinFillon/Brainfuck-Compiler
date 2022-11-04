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
    int value;
}memory_t;

static memory_t MEMORY[20] = {
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0}
};

static int POINTER = 0;

#endif /* !MEMORY_H_ */
