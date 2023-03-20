#include <stdio.h>

typedef struct {
    char *name;
    float age;
    char *owner;
} dog_t;

/**
 * init_dog - initializes a dog_t instance with the given name, age, and owner
 * @d: a pointer to the dog_t instance to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 */
void init_dog(dog_t *d, char *name, float age, char *owner) {
    if (d != NULL) {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
