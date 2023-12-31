#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);

}


/**
 * get_size - get size of numbers' digits
 * @n: number
 * @base: base
 * Return: size of number
 */

int get_size(unsigned long int n, unsigned long base)
{
	int size = 0;

	while (n)
	{
		size++;
		n /= base;
	}

	return (size);
}
