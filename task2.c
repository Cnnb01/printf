#include "main.h"
/**
* print_binary - Print an unsigned integer in binary format.
* @args: The arguments list.
*
* Return: The number of characters printed.
*/
int print_binary(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int count = 0;
int bit_position = sizeof(unsigned int) * 8 - 1;
int leading_zeroes = 1;
while (bit_position >= 0)
{
char bit = (num & (1 << bit_position)) ? '1' : '0'; 
if (bit == '1')
{
leading_zeroes = 0;
}
if (!leading_zeroes || bit_position == 0)
{
write(1, &bit, 1);
count++;
}
bit_position--;
}
if (count == 0)
{
write(1, "0", 1);
count = 1;
}
return (count);
}

