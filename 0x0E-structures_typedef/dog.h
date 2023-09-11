#ifndef __DOG__H__
#define __DOG__H__
/**
 * struct dog - new structure named dog
 * @name: name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
