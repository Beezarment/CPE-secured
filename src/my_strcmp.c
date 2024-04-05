/*
** EPITECH PROJECT, 2023
** my_strcmp.c
** File description:
** sd
*/

#include "../includes/hashtable.h"

int my_strcmp(const char *s1, const char *s2)
{
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2) {
            return (unsigned char)(*s1) - (unsigned char)(*s2);
        }
        s1++;
        s2++;
    }
    return (unsigned char)(*s1) - (unsigned char)(*s2);
}
