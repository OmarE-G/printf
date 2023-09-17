#include "main.h"
/**
 * print_string - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int print_string(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
		return (-1);

	len = _strlen(s);
	for (i = 0; i < len; i++)
		_putchar(s[i]);


	return (len);
}
