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
write(1, format, 1);
count++;
}
else
{
format++;
while (*format != '\0')
{
int ipoint = 0;
int (*counter)(va_list) = formatter(format, &ipoint);

if (counter)
{
count += counter(args);
format += ipoint;
}
else
{
count += write(1, "ERROR", 5);
}
}
}
format++;
}
va_end(args);
return (count);
}
