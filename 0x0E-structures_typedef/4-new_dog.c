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
	unsigned int i = 0, j = 0, k;

	while (*(name + i) != 0)
		i++;
	while (*(owner + j) != 0)
		j++;
	baby_dog = malloc(sizeof(dog_t));
	if (baby_dog == NULL)
	{
		free(baby_dog);
		return (NULL);
	}
	baby_dog->name = malloc(i * sizeof(baby_dog->name));
	if (baby_dog->name == NULL)
	{
		free(baby_dog->name);
		free(baby_dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		baby_dog->name[k] = name[k];
	baby_dog->name[k] = '\0';
	baby_dog->owner = malloc(j * sizeof(baby_dog->owner));
	if (baby_dog->owner == NULL)
	{
		free(baby_dog->owner);
		free(baby_dog->name);
		free(baby_dog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		baby_dog->owner[k] = owner[k];
	baby_dog->owner[k] = '\0';
	baby_dog->age = age;
	return (baby_dog);
}
