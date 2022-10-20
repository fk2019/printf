#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: number of characters printed
 */
int _printf(const char * const format, ...)
{
	va_list ap;
	int chars;

	chars = 0;
	va_start(ap, format);
	chars  = _vprintf(format, ap);
	va_end(ap);
	return (write(1, format, chars));
}
