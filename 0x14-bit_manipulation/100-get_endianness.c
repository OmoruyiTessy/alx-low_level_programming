#include "main.h"
#include <stdio.h>
/**
 * get_endianness - function that checks the endianness
 * Return: void
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte_ptr = (unsigned char *)&num;

	return ((byte_ptr[0] == 1) ? 1 : 0);
}
