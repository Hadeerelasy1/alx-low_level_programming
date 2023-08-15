#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char n = 'a';
	int i = 0;

	do {
		do {
			_putchar(n);
			n++;
		} while (n != 123);
	_putchar('\n');
	i++;
	n = 'a';
	} while (i < 10);
}
