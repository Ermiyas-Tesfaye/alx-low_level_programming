/**
 * _strlen - returns the length of a string
 * @s: the string value
 * Return: lengeth of string
 * Author: Ermiyas Tesfaye
 */
int _strlen(char *s)
{
	int n;
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] != ' ')
			n++;
		i++;
	}
	return (n);
}
