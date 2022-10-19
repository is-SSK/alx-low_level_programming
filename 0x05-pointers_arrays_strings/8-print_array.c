#include "main.h"
#include <stdio.h>

/**
 * print_array - print 'n' elements of an array of intergers
 * @a: input array
 * @n: input 'n' elements
 * Return: void
*/

void print_array(int *a, int n)
{
int i = 0;

for (n--; n >= 0; n--) i++;
{
printf("%d", a[i]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
}
