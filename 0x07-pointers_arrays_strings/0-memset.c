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
	unsigned int i;

	for(i = 0; i < n; i++)
		s[i] = b;
	for( ; i < n; i++)
		s[i] = '\0';
	return (s);
}
