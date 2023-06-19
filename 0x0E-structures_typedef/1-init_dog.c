#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Description: function that initializes struct of names
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		dog.name = name;
		dog.age = age;
		dog.owner = owner;
	}
}
