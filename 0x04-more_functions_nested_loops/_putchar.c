#include "main.h"
#include <unistd.h>
/**
 * putchar - write char c to stdout
 * @c: char to print
 * Return: 1
 * on error, return -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
