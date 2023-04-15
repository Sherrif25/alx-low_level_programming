
#include "main.h"

/**
 * _memset - Program fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: is the desired value
 * @n: number of bytes to be changed
 *
 * Return: change array with new value for n bytes
 */


char *_memset(char *s, char b, unsigned int n)


{



	for (a = 0; n > 0; a++)

	{


		s[a] = b;


		n--;


	}


	return (s);


}
