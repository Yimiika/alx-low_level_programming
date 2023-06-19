#include "dog.h"
#include <stddef.h>

/**
 * print_dog - Prints the details of a dog
 * @d: dog
 *
 * Description: function that prints details
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
        {
			return;
		}
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
