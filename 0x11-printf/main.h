#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>
#include <stdarg.h>
int _vprintf(const char * const format, va_list ap);
int _strlen(char *s);
int _putchar(char c);
int _printf(const char * const format, ...);
#endif /*_MAIN_H_*/
