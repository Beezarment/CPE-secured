/*
** EPITECH PROJECT, 2023
** B-CPE-110-BDX-1-1-secured-armand.dufresne
** File description:
** ht_search.c
*/

#include <stddef.h>
#include "../includes/hashtable.h"

char *ht_search(hashtable_t *ht, char *key)
{
    int index;
    hash_entry_t *current;

    if (ht == NULL || key == NULL) {
        return NULL;
    }
    index = ht->hash(key, ht->len);
    current = ht->table[index];
    while (current != NULL) {
        if (my_strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }
    return NULL;
}
