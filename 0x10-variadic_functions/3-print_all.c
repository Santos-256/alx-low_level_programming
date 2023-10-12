#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int k = 0;
	char *str, *any = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", any, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", any, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", any, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", any, str);
					break;
					default:
					k++;
					continue;
			}
			any = ", ";
			k++
		}
	}
	printf("\n");
	va_end(list);
}
