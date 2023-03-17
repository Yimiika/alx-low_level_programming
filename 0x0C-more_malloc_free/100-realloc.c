#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes, of the new memory block
 *
 * Return: a pointer to the newly allocated memory block, or NULL if the function fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    /* handle special cases */
    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }
    if (ptr == NULL)
        return (malloc(new_size));

    /* allocate new memory */
    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return (NULL);

    /* copy old data */
    if (new_size >= old_size)
        memcpy(new_ptr, ptr, old_size);
    else
        memcpy(new_ptr, ptr, new_size);

    /* free old memory */
    free(ptr);

    return (new_ptr);
}
