#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog_t instance with the given name, age, and owner
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 *
 * Return: a pointer to the new dog_t instance, or NULL if malloc fails
 */
dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL) {
        return NULL;
    }
    new_dog->name = malloc(strlen(name) + 1);
    if (new_dog->name == NULL) {
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->name, name);
    new_dog->age = age;
    new_dog->owner = malloc(strlen(owner) + 1);
    if (new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->owner, owner);
    return new_dog;
}
