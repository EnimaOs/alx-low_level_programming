/*
 * 0x07. C - Even more pointers, arrays and strings
 * task 5
 */
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - returns the number of characters in the initial segment
 * @haystack: array refrance
 * @needle: array refrance
 * Return: array refrance
 */
char *_strstr(char *haystack, char *needle) {
    if (*needle == '\0') {
        return haystack;
    }

    while (*haystack != '\0') {
        char *h = haystack;
        char *n = needle;

        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }

        if (*n == '\0') {
            return haystack;
        }

        haystack++;
    }

    return NULL;
}
