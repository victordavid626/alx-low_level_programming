#include "main.h"

/**
 * get_endianness - A function that checks endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int Victor = 1;
	char *David = (char *)&Victor;

	if (*David)
		return (1);
	return (0);
}
