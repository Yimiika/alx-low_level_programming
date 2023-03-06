#include <stdio.h>
/**
 * print_chessboard - function that prints the chessboard.
 * @a: my variable
 *
 */

void print_chessboard(char (*a)[8])
{
	int count, i;

	for (count = 0; count < 8; count++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[count][i]);
		}
		_putchar('\n');
	}
}
