#ifndef __DOG__H__
#define __DOG__H__
/**
 * struct dog - new structure named dog
 * @name: name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

