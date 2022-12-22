#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @str: The string to be appended upon.
 * @src: The string to be appended to str.
 * @n: The number of bytes from src to be appended to str.
 *
 * Return: A pointer to the resulting string str.
 */
char *_strncat(char *str, char *src, int n)
{
	int index = 0, str_len = 0;

	while (str[index++])
		str_len++;

	for (index = 0; src[index] && index < n; index++)
		str[str_len++] = src[index];

	return (str);
}

