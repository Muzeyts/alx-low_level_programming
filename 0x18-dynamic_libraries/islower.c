#include "main.h"

/**
 * _islower - this function checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if it is otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
