#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * p_char - print char
 * @list:arg
 * Return: void
 */

void p_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * p_string - print string
 * @list:arg
 * Return: void
 */

void p_string(va_list list)
{
	char *str;

	str = va_arg(list, char*);
	if (str == NULL)
		str = "(nil)";
printf("%s", str);
}
/**
 * p_integer - print integer
 * @list:arg
 * Return: void
 */

void p_integer(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * p_float - print float
 * @list:arg
 * Return: void
 */

void p_float(va_list list)

