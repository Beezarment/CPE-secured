/*
** EPITECH PROJECT, 2023
** B-CPE-110-BDX-1-1-secured-armand.dufresne
** File description:
** ht_dump.c
*/

#include <stddef.h>
#include "../includes/hashtable.h"

void ht_dump(hashtable_t *ht)
{
    hash_entry_t *current;

    if (ht == NULL) {
        return;
    }
    for (int i = 0; i < ht->len; i++) {
        my_putchar('[');
        my_put_nbr(i);
        my_putstr("]:\n");
        current = ht->table[i];
        while (current != NULL) {
            my_putstr("> ");
            my_putstr(current->key);
            my_putstr(" - ");
            my_putstr(current->value);
            my_putchar('\n');
            current = current->next;
        }
    }
}
