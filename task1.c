#include "main.h"
/**
 * pnumber - Rcursively prints out an integer.
 * @dig: the integer to be printed.
 *
 * description: function that recursively print an integer 'dig'.
 * if 'dig' is equal to INT_MIN it handle a special case for INT_MIN.
 * return: number of char printed.
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
 * _printint - print out integer using pnumber.
 * @args: va_list containing number of integers to be printed.
 *
 * description: the function serves as a wrapper for the pnumber function.
 * return: number of characters printed.
 */
int _printint(va_list args)
{
int numb = va_arg(args, int);
return (pnumber(numb));
}
