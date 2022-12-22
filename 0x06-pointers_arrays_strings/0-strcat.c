#include "main.h"
/**
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
