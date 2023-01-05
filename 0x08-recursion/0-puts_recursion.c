/**
 * _puts_recursion - prints string
 *@s: pointer to string
 */
#include "main.h"

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');

}
