#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				putchar(' ');
				if (j != i)
				{
					putchar(j);
					putchar(i);

					if (i == 98 && j == 99)
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
