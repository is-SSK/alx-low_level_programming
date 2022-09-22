#include "main.h"

/**
 * strcmp - compares two strings
 * @s1: pointeer to first string for comparison
 * @s2: pointer to second string for comparison
 * Return: if s1 < s2, negative difference of first unmatched characters
 * if s1 == s2, 0
 * if s1 > s2, positive difference of first unmatched characters
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
