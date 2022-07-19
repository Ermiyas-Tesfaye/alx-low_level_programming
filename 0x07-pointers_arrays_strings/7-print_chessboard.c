#include "main.h"
/**
 * print_chessboard - prints a chaseboard
 * @a: given character
 * Author: Ermiyas Tesfaye
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
