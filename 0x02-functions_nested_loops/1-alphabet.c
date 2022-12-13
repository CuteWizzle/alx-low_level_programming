#include "main.h"

/**
 * print_alphabets - print alphabets in lowercase and new line
 */

void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);
	_putchar('\n');
}
