/**
 * _strlen - returns the length of a string
 * @s: the string value
 * Return: lengeth of string
 * Author: Ermiyas Tesfaye
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
