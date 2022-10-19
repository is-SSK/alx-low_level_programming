#include "main.h"

/**
 * _atoi - converts a string to an interger
 * @s: input string
 * Return: interger
*/

int _atoi(char *s)
{
unsigned int num = 0;
int sign = 0;

do
{
if (*s == '-')
{
sign *= -1;
}

else if (*s >= '0' && *s <= '9')
{
num = (num * 10) + (*s - '0');
}

else if (num > 0)
{
break;
}
} while (*s++);

return (num * sign);
}
