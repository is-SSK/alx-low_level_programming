#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14 10 times
 *
 * Return: void
 */

void more_numbers(void);
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; n++)
		{
			if (c >= 10)
				_putchar((c / 10) + 48);
		}
		_putchar('\n');
	}
}