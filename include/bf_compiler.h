/*
** EPITECH PROJECT, 2022
** BRAINFUCK
** File description:
** bf_compiler
*/

#ifndef BF_COMPILER_H_
    #define BF_COMPILER_H_
int readfile(const char *path);
int my_strlen(char const *str);
int execute_bf(char *code, int *i);
int compile(char *code);
int check_while(char *code, int *i);
int execute_while(char *code, int *i, int start);
int my_putstr(char const *str);

#endif /* !BF_COMPILER_H_ */
