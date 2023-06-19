#ifndef HEADER_FILE
#define HEADER_FILE
#include <stddef.h>


/**
 * struct dog - gog features
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Description: struct of names
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t - new struct name
 * 
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
