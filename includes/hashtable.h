/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Secured
** File description:
** hashtable.h
*/

#ifndef HASHTABLE_H
    #define HASHTABLE_H

typedef struct hash_entry_s {
    char *key;
    char *value;
    struct hash_entry_s *next;
} hash_entry_t;

typedef struct hashtable_s {
    int len;
    int (*hash)(char *, int);
    hash_entry_t **table;
} hashtable_t;

int my_put_nbr(int nb);
void my_putchar(char c);
int hash(char *key, int len);
char *my_getnbr_str(int num);
void ht_dump(hashtable_t *ht);
int show_list(hashtable_t *ht);
int my_strlen(char const *str);
int my_putstr(char const *str);
char *my_strdup(const char *str);
void delete_hashtable(hashtable_t *ht);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(const char *s1, const char *s2);
int ht_insert(hashtable_t *ht, char *key, char *value);
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);

#endif
