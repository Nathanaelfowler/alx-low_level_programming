#include <stdio.h>

/** main - entry point
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	for (i = '10'; i <= '99'; i++)
	{
		putchar(i);
		if (i == '99')
		{
			continue;
		}
	
	for (j = '10'; j <= '99'; j++)
	{
		putchar(j);
		if (j == '99')
		{
			continue;
		}
	}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
