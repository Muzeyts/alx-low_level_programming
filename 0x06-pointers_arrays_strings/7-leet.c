#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string array
 * Return: string array
 * char *leet(char *s)
*{
*	int i;
*
*	for (i = 0; s[i] != '\0'; i++)
*	{
*		if (s[i] == 'a' || s[i] == 'A')
*			s[i] = '4';
*		if (s[i] == 'e' || s[i] == 'E')
*			s[i] = '3';
*		if (s[i] == 'o' || s[i] == 'O')
*			s[i] = '0';
*		if (s[i] == 't' || s[i] == 'T')
*			s[i] = '7';
*		if (s[i] == 'l' || s[i] == 'L')
*			s[i] = '1';
*	}
*
*	return (s);
*}
 */

char *leet(char *s)
{
	int count = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == low_letters[i] || *(s + count) == upp_letters[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
