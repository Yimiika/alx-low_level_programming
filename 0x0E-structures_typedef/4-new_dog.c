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
    /* Allocate memory for the dog_t struct */
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL) {
        printf("Error: could not allocate memory for new dog.\n");
        exit(1);
    }
    
    /* Allocate memory for the name and owner strings */
    new_dog->name = malloc(strlen(name) + 1);
    if (new_dog->name == NULL) {
        printf("Error: could not allocate memory for name.\n");
        free(new_dog);
        exit(1);
    }
    new_dog->owner = malloc(strlen(owner) + 1);
    if (new_dog->owner == NULL) {
        printf("Error: could not allocate memory for owner.\n");
        free(new_dog->name);
        free(new_dog);
        exit(1);
    }
    
    /* Copy the name and owner strings */
    strcpy(new_dog->name, name);
    strcpy(new_dog->owner, owner);
    
    /* Set the age field */
    new_dog->age = age;
    
    /* Return a pointer to the new dog_t instance */
    return new_dog;
}
