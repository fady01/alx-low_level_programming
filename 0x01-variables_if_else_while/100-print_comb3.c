#include <stdio.h>
/**
 * main - print number combintations of multible didgit numbers
 * Return: 0
 */
int main(void)
{
	char j = '1', i;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
