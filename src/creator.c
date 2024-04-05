/*
** EPITECH PROJECT, 2023
** elementapro
** File description:
** creator.c
*/

#include <stdlib.h>
#include <stddef.h>
#include "../includes/hashtable.h"

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *new_hash = malloc(sizeof(hashtable_t));

    if (new_hash == NULL){
        return NULL;
    }
    new_hash->len = len;
    new_hash->table = malloc(len * sizeof(hashtable_t));
    if (new_hash->table == NULL) {
        free(new_hash);
        return NULL;
    }
    for (int i = 0; i < len; i++) {
        new_hash->table[i] = NULL;
    }
    new_hash->hash = hash;
    return new_hash;
}
