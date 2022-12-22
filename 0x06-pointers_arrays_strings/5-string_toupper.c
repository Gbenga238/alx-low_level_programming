#include "main.h"

/**
 * string_toupper - Changes all lower letters
 *                  of string to uppercase.
 * @src: The string to be changed.
 *
 * Return: A pointer to the string that is changed.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
