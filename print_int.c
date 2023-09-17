#include "main.h"

/**
 * print_int - to print print unsigned integer
 * @arg: the argument of the integer function.
 * Return: A total count of the characters printed.
 */

int print_int(va_list arg)
{
	int number = va_arg(arg, int), div, len;
	unsigned int num;

	div = 1;
	len = 0;

	if (number < 0)
	{
		len += _putchar('-');
		num = -number;
	}
	else
		num = number;

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		len += _putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}

	return (len);
}
