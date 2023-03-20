#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - a structure representing a dog
 * @name: a pointer to a string representing the dog's name
 * @age: the age of the dog as a float
 * @owner: a pointer to a string representing the name of the dog's owner
 *
 * Description: This structure represents a dog and contains information about
 *              its name, age, and owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;

#endif
