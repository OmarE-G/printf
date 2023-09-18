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


/**
 * print_unsigned_integer - to print print unsigned integer
 * @arg: the argument of the unsigned integer function.
 * Return: A total count of the characters printed.
 */

int print_unsigned_integer(va_list arg)
{
	int div, len;
	unsigned int num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	div = 1;
	len = 0;

	while (num / div > 9)
	{
		div *= 10;
	}

	while (div != 0)
	{
		len += _putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}

	return (len);
}


/**
 * print_oct - prints octal numbers
 * @arg: the argument of the integer function.
 * Return: A total count of the characters printed.
 */

int print_oct(va_list arg)
{
	int cntr = 0, i;
	int *oct;
	unsigned int num = va_arg(arg, unsigned int), tmp = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	cntr = get_size(num, 8);
	oct = malloc(cntr * sizeof(int));
	if (oct == NULL)
		return (-1);
	if (oct)
	{
		for (i = 0; i < cntr; i++)
		{
			oct[i] = tmp % 8;
			tmp /= 8;
		}
		for (i = cntr - 1; i >= 0; i--)
		{
			_putchar(oct[i] + '0');
		}
		free(oct);
		return (cntr);
	}

	return (0);
}


/**
 * print_binary - to print binary number.
 * @arg: taking variadic function.
 * Return: A total count of the characters printed.
 */

int print_binary(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int i, cntr;
	char *binary;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	cntr = get_size(num, 2);
	binary = malloc(sizeof(char) * (cntr + 1));

	if (binary == NULL)
		return (-1);

	for (i = cntr - 1; i >= 0; i--)
	{
		binary[i] = (num & 1) + '0';
		num /= 2;
	}

	for (i = 0; i < cntr; i++)
	{
		_putchar(binary[i]);
	}

	free(binary);
	return (cntr);
}

/**
 * print_hexa - to print hexadecimal number.
 * @arg: taking variadic function.
 * @c: to print in uppercase.
 * Return: A total count of the characters printed.
*/
int print_hexa(va_list arg, char c)
{
	unsigned long int num = va_arg(arg, unsigned long int);
	int i, cntr, rem;
	char *hexa;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (c == 'p')
		_putchar('0'), _putchar('x');

	cntr = get_size(num, 16);
	hexa = malloc(cntr);

	if (hexa == NULL)
		return (-1);

	for (i = cntr - 1; i >= 0; i--)
	{
		rem = num % 16;
		hexa[i] = rem > 9 ? (rem - 10) + (c == 'X' ? 'A' : 'a') : rem + '0';
		num /= 16;
	}

	for (i = 0; i < cntr; i++)
	{
		_putchar(hexa[i]);
	}

	free(hexa);

	return (cntr);
}





