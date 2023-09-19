#include "main.h"
/**
 * _printf - Print formatted output to stdout.
 * @format: The format string containing directives.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
int ipoint = 0;
va_list args;
int count = 0;
va_start(args, format);
while (format[ipoint] != '\0' )
{
if (format[ipoint] != '%')
{
write(1, &(format[ipoint]), 1);
count++;
}
else
{
ipoint++;
while (*format != '\0')
{
int (*counter)(va_list) = formatter(format, &ipoint);
if (counter)
{
count += counter(args);
}
else
{
count += write(1, "ERROR", 5);
}
}}
format++;
}
ipoint++;
va_end(args);
return (count);
}
