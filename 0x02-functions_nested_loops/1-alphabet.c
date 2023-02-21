#include "main.h"

/**
 * print_alphabet - a function that prints the alphabets in lowercase
 *
 * Return: Always 0 which means Succes
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
