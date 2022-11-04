/*
** EPITECH PROJECT, 2022
** brainfuck
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int s = 0;

    while (str[s] != '\0') {
        s = s + 1;
    }
    return s;
}
