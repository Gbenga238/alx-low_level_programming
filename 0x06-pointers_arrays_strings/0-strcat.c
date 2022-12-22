#include "main.h"

/**
 * strcat - concatenates the string pointed to by @src, including the terminating
 * null byte, to the end of the string pointed to by @str.
 * @str: A pointer to the string to be concatenated upon.
 * @src: The source string to be appeneded to @str.
 *
 * Return: A pointer to the strination string @str.
 */
char *strncat(char @str, const char *src)
{
	int index = 0, str_len = 0;

	while (str[index++])
		str_len++;

	for (index = 0; src[index]; index++)
		str[str_len++] = src[index];

	return (str);
}
