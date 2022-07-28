#include "main.h"
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: intiger value
 * @size: size of dynamic memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * sizeof(int *));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		void str[i] = malloc(size);
		if (str[i] == NULL)
			return (NULL);
	}
	return (str);
}
