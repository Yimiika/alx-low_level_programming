#include "main.h"

/**
 * read_textfile - function to read a text file
 * @filename: pointer to name of file.
 * @letters: The number of letters
 * Return: if the function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
{
return (0);
}

FILE *fp = fopen(filename, "r");

if (fp == NULL)
{
return 0;
}

char buffer[letters + 1];
size_t bytes_read = fread(buffer, sizeof(char), letters, fp);
if (bytes_read == 0)
{
return 0;
}

buffer[bytes_read] = '\0';
fputs(buffer, stdout);
fclose(fp);
return (bytes_read);
}
