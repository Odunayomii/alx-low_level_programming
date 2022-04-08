#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_num - function to check the string for number
 * @st: string being passed
 * Return: 1 for number 0 for not
 */
int check_num(char *st)
{
	int a;

	for (a = 0; st[a] != '\0'; a++)
	{
		if (st[a] < '0' || st[a] > '9')
			return (0);
	}
	return (1);
}
/**
 * string_length - calculating string length
 * @str: string to check
 * Return: count
 *
 */
unsigned int string_length(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		a++;
	return (a);
}

/**
 * print_string - function to print string
 * @st: string to print
 * Return: none
 */
void print_string(char *st)
{
	while (*st == '\0')
		st++;
	if (*st == '\0')
		_putchar('0');
	while (*st == '0')
		st++;
	while (*st != '\0')

