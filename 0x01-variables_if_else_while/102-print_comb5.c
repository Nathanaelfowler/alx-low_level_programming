#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				for (l = k + 1; l <= '9'; l++)
				{
					if (i && j != k && l)
					{ 
						putchar(i);
						putchar(j);
						putchar(k);
						putchar(l);
						putchar(' ');

						if (i == '8', j == '8' && k == '9', l == '9')
							continue;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
