#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define ELF_HEADER_SIZE 64

void print_error(const char *msg)
{
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

void display_elf_header_info(const char *filename)
{
    int fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        print_error("Error opening file");
    }

    unsigned char elf_header[ELF_HEADER_SIZE];
    ssize_t bytes_read = read(fd, elf_header, ELF_HEADER_SIZE);
    if (bytes_read != ELF_HEADER_SIZE)
    {
        print_error("Error reading ELF header");
    }

    if (elf_header[0] != 0x7f || elf_header[1] != 'E' || elf_header[2] != 'L' || elf_header[3] != 'F')
    {
        print_error("File is not an ELF file");
    }

    printf("Magic: %02x %02x %02x %02x\n", elf_header[0], elf_header[1], elf_header[2], elf_header[3]);
    printf("Class: %s\n", (elf_header[4] == 1) ? "ELF32" : "ELF64");
    printf("Data: %s\n", (elf_header[5] == 1) ? "little-endian" : "big-endian");
    printf("Version: %d\n", elf_header[6]);
    printf("OS/ABI: %d\n", elf_header[7]);
    printf("ABI Version: %d\n", elf_header[8]);

    uint64_t entry_point = 0;
    if (elf_header[4] == 1)
    {
        entry_point = *(uint32_t *)(elf_header + 24);
        printf("Type: 0x%04x\n", *(uint32_t *)(elf_header + 16));
    }
    else if (elf_header[4] == 2)
    {
        entry_point = *(uint64_t *)(elf_header + 24);
        printf("Type: 0x%08x\n", *(uint32_t *)(elf_header + 16));
    }
    printf("Entry point address: 0x%lx\n", entry_point);

    close(fd);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        print_error("Usage: elf_header elf_filename");
    }

    const char *filename = argv[1];
    display_elf_header_info(filename);

    return 0;
}
