#include "main.h"
#include <limits.h>
/**
 * str_len - finds string length
 * @str: input pointer to string
 * Return: length of string
 */
int str_len(char *str)
{
	int len;

	for (len = 0; *str != '\0'; len++)
		len++, str++;
	return (len / 2);
}
/**
 * _calloc - allocates memory for an array using malloc
 * @bytes: bytes of memory needed per size requested
 * @size: size in bytes of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int bytes, unsigned int size)
{
	unsigned int i;
	char *p;

	if (bytes == 0 || size == 0)
		return (NULL);
	if (size >= UINT_MAX / bytes || bytes >= UINT_MAX / size)
		return (NULL);
	p = malloc(size * bytes);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < bytes * size; i++)
		p[i] = 0;
	return ((void *)p);
}
/**
 * add_arrays - adds 2 arrays of ints
 * @mul_result: pointer to array with numbers from product
 * @sum_result: pointer to array with numbers from total sum
 * @len_r: length of both arrays
 * Return: void
 */
void add_arrays(int *mul_result, int *sum_result, int len_r)
{
	int i = 0, len_r2 = len_r - 1, carry = 0, sum;

	while (i < len_r)
	{
		sum = carry + mul_result[len_r2] + sum_result[len_r2];
		sum_result[len_r2] = sum % 10;
		carry = sum / 10;
		i++;
		len_r2--;
	}
}
/**
 * is_digit - checks for digits
 * @c: input character to check for digit
 * Return: 0 failure, 1 success
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	printf("Error\n");
	return (0);
}
/**
 * multiply - multiplies 2 #'s, prints result, must be 2 #'s
 * @num1: factor # 1 (is the smaller of 2 numbers)
 * @len_1: length of factor 1
 * @num2: factor # 2 (is the larger of 2 numbers)
 * @len_2: length of factor 2
 * @len_r: length of result arrays
 * Return: 0 fail, 1 success
 */
int *multiply(char *num1, int len_1, char *num2, int len_2, int len_r)
{
	int i = 0, i1 = len_1 - 1;
	int i2, product, carry, digit, *mul_result, *sum_result;

	sum_result = _calloc(sizeof(int), (len_r));
	while (i < len_1)
	{
		mul_result = _calloc(sizeof(int), len_r);
		i2 = len_2 - 1, digit = (len_r - 1 - i);
		if (!is_digit(num1[i1]))
			return (NULL);

