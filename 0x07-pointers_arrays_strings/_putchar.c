#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: char to print
 *
 * Return: 1(success)
 * On error, return -1, and errno set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
