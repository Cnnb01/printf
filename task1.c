#include "main.h"
  2
  3 /**
  4 * pnumber - Recursively print out a number.
  5 * @dig: The integer to be printed.
  6 *
  7 * Return: The number of characters printed.
  8 */
  9 int pnumber(int dig)
 10 {
 11 int count = 0;
 12
 13 if (dig == INT_MIN)
 14 {
 15 putchar('-');
 16 count++;
 17 count += pnumber(INT_MAX / 10);
 18 putchar(INT_MAX % 10 + 1 + '0');
 19 count++;
 20 return (count);
 21 }
 22 else if (dig < 0)
 23 {
 24 putchar('-');
 25 count++;
 26 dig = -dig;
 27 }
 28
 29 if (dig >= 10)
 30 {
 31 count += pnumber(dig / 10);
 32 }
 33
 34 putchar(dig % 10 + '0');
 35 count++;
 36
 37 return (count);return (count);
 38 }
 39
 40 /**
 41 * _printint - Print an integer using pnumber.
 42 * @args: The arguments list.
 43 *
 44 * Return: The number of characters printed.
 45 */
 46 int _printint(va_list args)
 47 {
 48 int numb = va_arg(args, int);
 49 return (pnumber(numb));
 50 }
