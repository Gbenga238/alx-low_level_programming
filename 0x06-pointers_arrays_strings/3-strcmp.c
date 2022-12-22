#include "main.h"

/**
 * _strcmp - Compare pointers to the strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If string1 < string2, the negative diff of the first unmatched characters.
 *         If string1 == string2, 0.
 *         If string1 > string2, the positive diff of the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		*s1++;
		*s2++;
	}

	return (*s1 *s2);
}
