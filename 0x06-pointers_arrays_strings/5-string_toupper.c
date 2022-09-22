#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: pointer to changed string
 */

char *string_toupper(char *)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		
		index++;
	}
	return (str);
}
