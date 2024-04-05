/*
** EPITECH PROJECT, 2023
** B-CPE-110-BDX-1-1-secured-armand.dufresne
** File description:
** ht_delete.c
*/

#include <stddef.h>
#include <stdlib.h>
#include "../includes/hashtable.h"

int conditionnal
(hashtable_t *ht, hash_entry_t *current, hash_entry_t *previous, char *key)
{
    int index = hash(key, ht->len);

    if (current == NULL) {
        return -1;
    }
    if (my_strcmp(current->key, key) == 0) {
        if (previous == NULL) {
            ht->table[index] = current->next;
        } else {
            previous->next = current->next;
        }
        free(current->key);
        free(current->value);
        free(current);
        return 0;
    }
    return 1;
}

int ht_delete(hashtable_t *ht, char *key)
{
    int index = hash(key, ht->len);
    hash_entry_t *current = ht->table[index];
    hash_entry_t *previous = NULL;

    if (ht == NULL || key == NULL) {
        return 84;
    }
    while (current != NULL) {
        if (conditionnal(ht, current, previous, key) == 0) {
            return 0;
        }
        previous = current;
        current = current->next;
    }
    return 1;
}
