#include "main.h"
/**
 * swap_int - swap two integer values
 * @a: 1st integer
 * @b: 2nd integer
 * Return: return nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
