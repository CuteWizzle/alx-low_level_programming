#include <unistd.h>
#include "main.h"

/**
*_putchar - writes the character c to the stdout
*@c: The character input
*Return: 1 on success
*on error, -1 is returned, and errno is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
