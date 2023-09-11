#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog using the given arguments
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: (NULL)if memory allocation fails, otherwise
 * a pointer to  the created structure is returned
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *baby_dog;
	unsigned long size, i, j;

	for (i = 0; *(name + i) != 0 && name != 0; i++)
		;
	for (j = 0; *(owner + j) != 0 && owner != 0; j++)
		;
	size = i + j + sizeof(float);
	baby_dog = malloc(size);
	if (baby_dog == NULL)
		return (NULL);
	baby_dog->name = name;
	baby_dog->age = age;
	baby_dog->owner = owner;
	return (baby_dog);
}
