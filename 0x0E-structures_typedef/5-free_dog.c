#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory previously allocated for (d)
 * @d: the instance in memoy to be freed
 * Return: (void)
 */
void free_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
