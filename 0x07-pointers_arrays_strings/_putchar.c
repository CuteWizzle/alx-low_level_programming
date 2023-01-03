#include "main.h"
#include <unistd.h>

/**
*_putchar - writes the character c to stdout
*@c: char to be printed
*Return: 1 on success
*error, -1 us returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
