#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* HELPER FUNCTIONS */
int _putchar(char c);

/* STRUCT */
/**
 * struct match_s - struct
 * @find: variable that finds a match
 * @function: function that matching variables call
 * Return: none
 **/
typedef struct match_s
{
	char *identifier;
	int (*function)(va_list);
} match_t;

/* MAIN FUNCTIONS */
int _print_mod(va_list list);
int _print_string(va_list list);
int _print_char(va_list list);
int _print_d_i(va_list list);
int _printf(const char *format, ...);

/* PRINT OTHER FUNCTIONS */
int _print_rev(va_list list);
int _print_rot13(va_list list);

#endif
