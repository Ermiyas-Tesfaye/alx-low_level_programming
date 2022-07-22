#include "main.h"
/**
 * _atoi - Convert char to int
 * @s: the string value
 * Author: Ermiyas Tesfaye
 * Return: the integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	char *temp = s;

	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			num = num * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (num * sign);
}
