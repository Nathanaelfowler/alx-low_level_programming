#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			if (i != i)
			{	putchar(' ');
				if (j != j)
				{
					putchar(i);
					putchar(i);
					putchar(j);
					putchar(j);

					if (i == '98' && j == '99')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}			
	}
	putchar('\n');
	return (0);
}
