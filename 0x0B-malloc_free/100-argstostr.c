#include "main.h"
/**
 * argstostr - a string that concatinate all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer of new string
 * Author: Ermiyas
 */
char *argstostr(int ac, char **av)
{
	int i, j, x = 0, z = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			z++;
		}
	}
	s = (char *)malloc(sizeof(char) * z + sizeof(char) * ac + 1);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			s[x] = av[i][j];
			x++;
			j++;
		}
		s[x] = '\n';
		x++;
	}
	s[x] = '\0'
	return (s);
}
