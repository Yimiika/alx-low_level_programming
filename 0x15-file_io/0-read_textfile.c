#include "main.h"

/**
 * read_textfile - function to read a text file
 * @filename: pointer to name of file.
 * @letters: The number of letters
 * Return: if the function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        return (0);
    }

    char *buffer = malloc(letters + 1);
    if (buffer == NULL) {
        exit(EXIT_FAILURE);
    }

    ssize_t bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1) {
        free(buffer);
        return (0);
    }

    buffer[bytes_read] = '\0';
    write(STDOUT_FILENO, buffer, bytes_read);
    free(buffer);
    close(fd);
    return (bytes_read);
}
