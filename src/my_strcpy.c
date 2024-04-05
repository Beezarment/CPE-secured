/*
** EPITECH PROJECT, 2023
** B-CPE-110-BDX-1-1-secured-armand.dufresne
** File description:
** my_strcpy.c
*/

#include <string.h>
#include "../includes/hashtable.h"

char *my_strcpy(char *dest, char const *src)
{
    int a = 0;

    for (a = 0; src[a] != '\0'; a++) {
        dest[a] = src[a];
    }
    dest[a] = '\0';
    return dest;
}
