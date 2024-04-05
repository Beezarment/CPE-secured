/*
** EPITECH PROJECT, 2023
** elementapro
** File description:
** hash.c
*/

#include "../includes/hashtable.h"

int hash(char *key, int len)
{
    int hash_value = 0;

    for (int i = 0; i < len; i++) {
        hash_value = (hash_value * 31) + key[i];
    }
    return hash_value;
}
