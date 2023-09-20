#include "main.h"
#include <stdarg.h>
/**
* pnumber - Recursively print out a number.
* @dig: The integer to be printed.
*
* Return: The number of characters printed.
*/
int pnumber(int dig)
{
int count = 0;
if (dig == INT_MIN)
{
putchar('-');
count++;
count += pnumber(INT_MAX / 10);
putchar(INT_MAX % 10 + 1 + '0');
count++;
return (count);
}
else if (dig < 0)
{
putchar('-');
count++;
dig = -dig;
}
if (dig >= 10)
{
count += pnumber(dig / 10);
}
putchar(dig % 10 + '0');
count++;
return (count);
}
/**
* _printint - Print an integer using pnumber.
* @args: The arguments list.
*
* Return: The number of characters printed.
*/
int _printint(va_list args)
{
int numb = va_arg(args, int);
return (pnumber(numb));
}
