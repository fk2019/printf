#include "main.h"

/**
 * _vprintf - prints arguemnts of type va_list
 * @format: character string
 * @ap: argument pointer
 *
 * Return: length of strings to be printed
 */
int _vprintf(const char *const format, va_list ap)
{
	int state, chars, cl, strlen;
	const char *p;

	cl = strlen = chars = 0;
	p = format;
	state = 0;
	while (*p)
	{
		if (state == 0)
		{
			if (*p == '%')
				state = 1;
			else
				chars++;
		}
		else if (state == 1)
		{
			switch (*p)
			{
				case 'c':
				{
					char x;

					x = va_arg(ap, int);
					cl = _strlen(&x);
					chars += cl;
					break;
				}
				case 's':
				{
					char *str;

					str = va_arg(ap, char *);
					strlen = _strlen(str);
					chars += strlen;
					break;
				}

			}
			state = 0;
		}
		p++;
	}

	return (chars);
}
