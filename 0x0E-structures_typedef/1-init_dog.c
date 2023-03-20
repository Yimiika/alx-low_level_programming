/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to a struct dog variable
 * @name: Name of the dog as a string
 * @age: Age of the dog as a float
 * @owner: Name of the dog's owner as a string
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL) {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
