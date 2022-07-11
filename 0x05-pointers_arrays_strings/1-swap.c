/**
 * swap_int - swaps the value of two intigers
 * @a: the first integer
 * @b: the second integer
 * Return: no return value
 * Author: Ermiyas Tesfaye
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
