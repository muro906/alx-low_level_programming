#include"variadic_functions.h"
/**
 * print_numbers- prints numbers followed by a separaator
 * @separator: The separator in between the numbers
 * @n: Total numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	if (separator == NULL || n == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(list, int));
		printf("%d, ", va_arg(list, int));
	}
}
