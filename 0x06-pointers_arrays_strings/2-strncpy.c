#include "main.h"

/**
 * _strncpy - Copies at most and inputted number
 *           of bytes from strings src into str
 * @str: The buffer soring the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src
 *
 * Return: A pointer to the returning string str.
 */
char *_strncpy(char *str, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index ++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		str[index] = src[index];

	for (index = src_len; index < n; index++)
		str[index] = '\0';

	return (str);
}

