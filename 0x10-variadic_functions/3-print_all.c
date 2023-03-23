#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of args passed to the func
 * @...: params
 * Return: void
 */

void print_all(const char * const format, ...)
{
	const char *p;
	char c;
	int i;
	float f;
	char *s;
	va_list args;

	p = format;
	va_start(args, format);
	while (*p)
	{
		switch (*p)
		{
			case 'c':
				c = va_arg(args, char);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				continue;

		}
		p++;
	}
	printf("\n");
	va_end(args);
}
