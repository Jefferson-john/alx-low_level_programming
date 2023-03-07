#include "main.h"
/**
 * _memset - fills the first n bytes of memory
 * @s: beginning memory address to be filled
 * @b: desired value
 * @n: num of bytes to be changed
 *
 * Return: changed array with value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
