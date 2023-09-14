#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 * @c - the character to print
 * Return - on success 1
 * onerror - 1 is returned, and error is setapproximatly.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
