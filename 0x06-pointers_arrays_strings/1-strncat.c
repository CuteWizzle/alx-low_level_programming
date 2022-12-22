#include "main.h"

/**
*_strncat - join two strings with n byte
*@dest: copy to
*@src: cooy from
*@n: number of char to be copied
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
