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
int (*printer)(va_list);

va_start(args, format);
while (format[ipoint] != '\0' )
{
if (format[ipoint] == '%' && format[ipoint + 1] != '\0')
{
ipoint++;
printer = formatter(format, &ipoint);
if (printer)
{
count += printer(args);
}
else
{
ipoint--;
count += write(1, &format[ipoint], 1);
}
}

else
{
count += write(1, &format[ipoint], 1);
}
ipoint++;
}
va_end(args);
return (count);
}
