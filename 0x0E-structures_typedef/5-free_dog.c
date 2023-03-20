#include <stdlib.h>
#include <dog.h>


/**
 * free_dog - frees a dog_t instance previously created by new_dog
 * @d: a pointer to the dog_t instance to free
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
