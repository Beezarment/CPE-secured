/*
** EPITECH PROJECT, 2023
** elementapro
** File description:
** deleter.c
*/

#include <stddef.h>
#include <stdlib.h>
#include "../includes/hashtable.h"

void delete_hashtable(hashtable_t *ht)
{
    hash_entry_t *next;
    hash_entry_t *current;

    if (ht == NULL) {
        return;
    }
    for (int i = 0; i < ht->len; i++) {
        current = ht->table[i];
        while (current != NULL) {
            next = current->next;
            free(current->key);
            free(current);
            current = next;
        }
    }
    free(ht->table);
    free(ht);
}
