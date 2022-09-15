#include "main.h"

/**
 * _abs - Entry point
 * Description: Prints the absolute value of an interger
 * @N: n is an interger
 * Return: int
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
