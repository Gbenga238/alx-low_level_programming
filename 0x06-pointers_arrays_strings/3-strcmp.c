#include "main.h"

/**
This function compares two strings and returns the difference between their first unmatched characters. If the first string is less than the second, the return value will be negative. If the two strings are equal, the return value will be 0. If the first string is greater than the second, the return value will be positive. The function takes in two pointers to the strings being compared, s1 and s2

 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference
 * of the first unmatched characters.
 * If s1 == s2, 0.
 * If s1 > s2, the positive difference of the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

