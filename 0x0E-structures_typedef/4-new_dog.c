#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner) {
    /* Check if name or owner is NULL */
    if (name == NULL || owner == NULL) {
        return NULL;
    }
    
    /* Allocate memory for the new dog */
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL) {
        return NULL;
    }
    
    /* Allocate memory for the name and copy it */
    new_dog->name = malloc(strlen(name) + 1);
    if (new_dog->name == NULL) {
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->name, name);
    
    /* Allocate memory for the owner and copy it */
    new_dog->owner = malloc(strlen(owner) + 1);
    if (new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->owner, owner);
    
    /* Set the age */
    new_dog->age = age;
    
    /* Return the new dog */
    return new_dog;
}
