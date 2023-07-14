#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
/**
 * main-entry point
 * write-write to stderr
 * strlen-length of string
 * Return: always 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
	, strlen(str) + 1);
	return (1);
}
