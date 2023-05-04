#include "main.h"

/**
 * get_endianness - checks byte order information about the CPU architecture.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	uint32_t ui = 1;
	uint8_t *c = (uint8_t *)&ui;

	return (*c);
}

