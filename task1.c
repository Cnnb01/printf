#include <stdarg.h>

#include <stdio.h>

/* _printint - Print out an integer.
 *@args: A va_list containing the integer to be printed.

*Return: The number of characters printed. */ 
int _printint(va_list args)
{
       	int num = va_arg(args, int);
	int count = 0;
	int negative = num < 0;

if (negative)
{
       	num = -num;
       	count += putchar('-');
}

if (num == 0) 
{ 
	count += putchar('0');
       	return count;
}

while (num > 0)
{
       	count += putchar((num % 10) + '0');
       	num = num / 10; }

return (count);
}
