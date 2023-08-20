#include"variadic_functions.h"
/**
 * sum_them_all- sum numbers
 * @n: parameter
 * Return: sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		result += va_arg(list, int);
	}
	va_end(list);
	return (result);
}

