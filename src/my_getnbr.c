/*
** EPITECH PROJECT, 2023
** B-CPE-110-BDX-1-1-secured-armand.dufresne
** File description:
** my_getnbr.c
*/

#include <stddef.h>
#include <stdlib.h>
#include "../includes/hashtable.h"

int count_digits(int num)
{
    int temp = num;
    int num_digits = 0;

    if (temp == 0) {
        num_digits = 1;
    } else {
        while (temp != 0) {
            temp /= 10;
            num_digits++;
        }
    }
    return num_digits;
}

void fill_str(char *result_str, int num_digits, int num, int is_negative)
{
    int i = 0;

    i = num_digits + is_negative - 1;
    if (is_negative) {
        result_str[0] = '-';
    }
    while (num != 0) {
        result_str[i] = '0' + (num % 10);
        num /= 10;
        i--;
    }
    result_str[num_digits + is_negative] = '\0';
}

char *my_getnbr_str(int num)
{
    int num_digits = count_digits(num);
    int is_negative = 0;
    char *result_str;

    if (num < 0) {
        is_negative = 1;
        num_digits++;
        num = -num;
    }
    result_str = (char *)malloc(num_digits + 1 + is_negative);
    if (result_str == NULL) {
        return NULL;
    }
    fill_str(result_str, num_digits, num, is_negative);
    return result_str;
}
