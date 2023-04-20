#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function to print strings, followed by a new line
 * @separator: The string to be printed between the strings
 * @n: Number of stings to be passed to the function
 * @...: Number of stings to be printed
 *
 * Description: function will NOT print if separator is NULL,
 * It will print (nil), if one of the strings is NULL
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *s;
	unsigned int index;

	va_start(str, n);
	for (index = 0; index < n; index++)
	{
		s = va_arg(str, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
