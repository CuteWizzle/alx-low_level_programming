#include "main.h"

/**
*_memset - a function that fills
*memory with a constant byte
*@s: input pointer to char type
*represents the pointer to the
*block of memory to fill
*@b: input variable of char type
*represents the character to
*fill s
*@n: unsigned int variable
*the number of bytes to be filled
*
* Return: A pointer to the filled memory
*area @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n = 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
