/*
** EPITECH PROJECT, 2023
** B-CPE-110-BDX-1-1-secured-armand.dufresne
** File description:
** show_list.c
*/

#include "../includes/hashtable.h"
#include <stddef.h>

int show_list(hashtable_t *ht)
{
   for (int i = 0; i < ht->len; i++) {
        hash_entry_t *current = ht->table[i];
        printf("Bucket %d: ", i);
        while (current) {
            printf("(%s, %s) -> ", current->key, current->value);
            current = current->next;
        }
        printf("NULL\n");
    }
}