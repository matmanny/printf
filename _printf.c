#include "holberton.h"

/**
 * _printf - prints all user inputs 
 * @format: character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int x = 0, y = 0, counter = 0;
	unsigned int flag;
	match_t matches[] = {
		{"%", _print_mod}, {"c", _print_char}, {"s", _print_string},
		{"d", _print_d_i}, {"i", _print_d_i}, {"r", _print_rev}, 
		{"R", _print_rot13}, {NULL, NULL}
	};

	va_start(list, format);
	if (format == NULL || (format[y] == '%' && format[y] == '\0'))
		return (0);
	while (format[y] != '\0')
	{ 
		flag = 0;
		if (format[y] == '%')
		{
			x = 0;
			while (matches[x].identifier != NULL && flag == 0)
			{
				if (*(matches[x].identifier) == format[y + 1])
				{
					counter += (matches[x].function(list));
					flag = 1;
				}
				else
					x++;
			}
			if (matches[x].identifier == NULL)
			{
				_putchar(format[y]);
				counter += 1;
				_putchar(format[y + 1]);
				counter += 1;
			}
			y = y + 2;
		}
		else
		{
			_putchar(format[y]);
			counter = counter + 1;
			y++;
		}
	}
	va_end(list);
	return (counter);
}
