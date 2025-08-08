#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: 8x8 array representing the board
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++) /* Hər sətri */
	{
		for (j = 0; j < 8; j++) /* Hər sütunu */
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
