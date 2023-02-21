#include "main.h"

/**
 * print_alphabet_x10 - this prints the alphabets in lowercase ten times
 *
 * Return: Always return to 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int m, n;

	for (m = 0; m < 10; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
