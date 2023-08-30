#include"main.h"
/**
 * _memset-Fill memory with a constant byte c
 * @b: Character to be filled
 * @n: Fill how many bytes
 * @s: The memory buffer
 * Return: a pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
    int len = n;
    char * p = s;

    while (len--)
    {
        *p = b;
        p++;
    }
    return (s);
}
