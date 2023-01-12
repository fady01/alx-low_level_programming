#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - check for memory lcoa nd assgin it
 *@b : size of block
 *
 *Return: return void *
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b))
		return (malloc(b));
	exit(98);
}
