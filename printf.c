#include "main.h"

/**
 * _printf - Receives the main string and all
 * the necessary parameters to print a string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i, num = 0, temp = 0;
	char ch;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			num++;
		}
		else
		{
			temp = 0;
			i++;
			ch = format[i];
			if (!ch)
				return (-1);
			 temp += printer(ch, arg);
			if (temp < 0)
				return (-1);
			 num += temp;

		}

	}
	if (num < 0)
		return (-1);

	va_end(arg);
	return (num);
}
