#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: structure to free
 *
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
