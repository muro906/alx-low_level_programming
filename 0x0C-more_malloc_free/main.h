#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<stdlib.h>
char *_memset(char *str, char c, unsigned int size);
void *_calloc(unsigned int nmemb, unsigned int size);
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
#endif /*MAIN_H*/