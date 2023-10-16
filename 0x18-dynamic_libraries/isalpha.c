#include "main.h"

/**
 * _isalpha - this function checks if it is alphabet
 * @c: single letter input
 * Return: 1 if int c is letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
