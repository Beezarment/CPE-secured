/*
** EPITECH PROJECT, 2023
** B-CPE-110-BDX-1-1-secured-armand.dufresne
** File description:
** my_strlen.c
*/

#include <string.h>
#include "../includes/hashtable.h"

int my_strlen(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        index += 1;
    }
    return (index);
}
