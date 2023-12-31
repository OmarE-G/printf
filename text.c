#include "main.h"


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - print a character.
 * @val: argument.
 * Return: 1.
*/
int print_char(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);

	return (1);
}

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
		s = "(null)";

	len = _strlen(s);
	for (i = 0; i < len; i++)
		_putchar(s[i]);


	return (len);
}
