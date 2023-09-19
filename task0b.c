#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
* _printf - Print formatted output to stdout.
* @format: The format string containing directives.
*
* Return: The number of characters printed (excluding the null byte).
*/
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
va_start(args, format);
while (format && *format)
{
if (*format != '%')
{
putchar(*format);
count++;
}
else
{
format++; /* Move past '%'*/
if (*format == '\0') /* Check for '%' at the end */
break;
switch (*format)
{
case 'c':
putchar(va_arg(args, int));
count++;
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'd':
printf("%d", va_arg(args, int));
break;
case 's':
count += _printstr(va_arg(args, char *));
break;
case '%':
putchar('%');
count++;
break;
default:
putchar('%');
putchar(*format);
count += 2;
break;
}
}
format++;
}
va_end(args);
return (count);
}
/**
 * _printstr - Print a string and return its length.
 * @str: The string to print.
 *
 * Return: The length of the string.
 */
int _printstr(const char *str)
{
int count = 0;
if (str == NULL)
str = "(null)";
while (*str)
{
putchar(*str);
str++;
count++;
}
return (count);
}
