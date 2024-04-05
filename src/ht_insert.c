/*
** EPITECH PROJECT, 2023
** B-CPE-110-BDX-1-1-secured-armand.dufresne
** File description:
** ht_insert.c
*/

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "../includes/hashtable.h"

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int index = 0;
    int key_hash = 0;
    hash_entry_t *new = malloc(sizeof(hash_entry_t));

    if (ht == NULL || key == NULL || value == NULL) {
        return 84;
    }
    if (new == NULL) {
        return 0;
    }
    key_hash = ht->hash(key, ht->len);
    index = key_hash % ht->len;
    new->key = my_strdup(my_getnbr_str(key_hash));
    new->value = my_strdup(value);
    new->next = ht->table[index % ht->len];
    ht->table[index % ht->len] = new;
    return 1;
}
