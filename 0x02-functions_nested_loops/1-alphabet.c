#include "main.h"

/**
 * print_alphabet - print alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char n = 'a';

	do {
		_putchar(n);
		n++;
	} while (n != 123);
	_putchar('\n');
}
