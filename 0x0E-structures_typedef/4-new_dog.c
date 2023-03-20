#include <stdlib.h>
#include <string.h>

typedef struct dog_s {
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * new_dog - creates a new dog_t instance with the given name, age, and owner
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 *
 * Return: a pointer to the newly created dog_t instance, or NULL if an error occurred
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = strdup(name);
	if (new_dog->name == NULL) {
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL) {
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
