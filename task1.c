#include "main.h"
/**
*_printint - Print out a number.
* Return: The number.
*/
int _printint(va_list args)
{
int a = va_arg(args, int);
int count = 0;
int nega = 0;
int num, reversed = 0;
(void)formatter;

if (a < 0)
{
putchar ('-');
a = -a;
nega++;
}
while (a > 0)
{
num = a % 10;
reversed = reversed * 10 + num;
a = a / 10;
}
while (reversed > 0)
{
num = reversed % 10;
putchar('0' + num);
reversed = reversed / 10;
count++;
}
return (count);
}
