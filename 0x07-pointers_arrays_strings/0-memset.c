/**
 * _memset - fills memory with a constant byte
 * @s: the buffer area
 * @b: constant value
 * @n: size
 * Return: a pointer to the memory area s
 * Author: Ermiyas
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
