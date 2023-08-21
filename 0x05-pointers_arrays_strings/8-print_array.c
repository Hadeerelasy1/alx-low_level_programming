#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array
 *
 * @a: pointer to an int
 * @n: number of array
 *
 * Return: void
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
		i++;
	}
}
