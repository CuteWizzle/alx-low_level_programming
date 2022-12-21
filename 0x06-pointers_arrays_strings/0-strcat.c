#include "main.h"

/**
 * _strcat - function that concatenates
 * two strings.
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/** find the size of dest array*/
	while (dest[c])
		c++;
	for (c2 = 0; src[c2] ; c2++)
	dest[c++] = src[c2];
	return (dest);
}
