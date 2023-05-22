#include "main.h"

/**
 * binary_to_uint - this converts a binary to an unsigned int.
 * @b: This is a binary number.
 * Return: if success return unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui_count;
	int length, base_two;

	if (!b)
		return (0);

	ui_count = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base_two = 1; length >= 0; length--, base_two *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			ui_count += base_two;
		}
	}

	return (ui_count);
}
