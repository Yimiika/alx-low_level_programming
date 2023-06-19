#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: dog
 *
 * Description: function that initializes struct of names
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
        {
			return;
		}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
