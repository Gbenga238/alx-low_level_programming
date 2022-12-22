#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int u_i);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @u_i: The current index of the buffer.
 *
 * Return: If r can store the sum- a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char *add_string(char *n1, char *n2, char *r, int u_i)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, u_i--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + u_i) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--, u_i--)
	{num = (*n1 - '0') + tens;
		*(r + u_i) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--, u_i--)
	{
		num = (*n2 - '0') + tens;
		*(r + u_i) = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens && u_i >= 0)
	{
		*(r + u_i) = (tens % 10) + '0';
		return (r + u_i);
	}

	else if (tens && u_i < 0)
		return (0);

	return (r + u_i + 1)
}
/**
 * infinite_add - Add two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_len = 0, n2_len = 0;

	for (index = 0; *(n1 + index); index++)
		n1_len++;

	for (index = 0; *(n2 + index); index++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_t <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
