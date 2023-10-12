#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int d = 0;
	char *str, *oct = "";

	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[d])
		{
			switch (format[d])
			{
				case 'c':
					printf("%s%c", oct, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", oct, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", oct, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", oct, str);
					break;
				default:
					d++;
					continue;
			}
			oct = ", ";
			d++;
		}
	}

	printf("\n");
	va_end(ap);
}

