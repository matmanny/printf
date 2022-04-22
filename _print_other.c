#include "holberton.h"

/**
 * _print_rev - function that prints string in reverse
 * @list: va_list list
 * Return: none
 **/
int _print_rev(va_list list)
{
	char *str = va_arg(list, char *);
	int x, counter = 0;

	if (str == NULL)
		str = ")llun(";
	for (x = 0; str[x] != '\0'; x++)
		;
	for (x -= 1; x >= 0; x--)
	{
		_putchar(str[x]);
		counter += 1;
	}
	return (counter);
}

/**
 * _print_rot13 - function that encodes a string using rot13
 * @list: va_list list
 * Return: a
 **/
int _print_rot13(va_list list)
{
	char *x = va_arg(list, char *);
	int a, b, counter = 0;
	char forward[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotate[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; x[a] != '\0'; a++)
	{
		for (b = 0; forward[b] != '\0'; b++)
		{
			if (forward[b] == x[a])
			{
				_putchar(rotate[b]);
				counter += 1;
				break;
			}
		}
		if (forward[b] == '\0')
		{
			_putchar(x[a]);
			counter += 1;
		}
	}
	return (counter);
}
