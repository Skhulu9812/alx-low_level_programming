#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1; num2 < 100; num2++)
		{
			/* Print first number tens digit */
			putchar((num1 / 10) + '0');
			/* Print first number units digit */
			putchar((num1 % 10) + '0');

			putchar(' ');

			/* Print second number tens digit */
			putchar((num2 / 10) + '0');
			/* Print second number units digit */
			putchar((num2 % 10) + '0');

			/* Print comma and space if not the last combination */
			if (num1 != 99 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
