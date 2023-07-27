#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>

/**
 * print_error - Print error message and exit with status code 98
 * @message: The error message to print
 */
void print_error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header_info - Print information contained in ELF header
 * @header: Pointer to ELF header structure
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x\n",
	       header->e_ident[0], header->e_ident[1], header->e_ident[2], header->e_ident[3]);
	printf("  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASS32: printf("ELF32\n"); break;
		case ELFCLASS64: printf("ELF64\n"); break;
		default: printf("<unknown>\n"); break;
	}
	printf("  Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
		case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
		default: printf("<unknown>\n"); break;
	}
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
		case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
		case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
		case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
		case ELFOSABI_AIX: printf("UNIX - AIX\n"); break;
		case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
		case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
		case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
		case ELFOSABI_ARM: printf("ARM\n"); break;
		case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
		default: printf("<unknown>\n"); break;
	}
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header->e_type)
	{
		case ET_NONE: printf("NONE (Unknown type)\n"); break;
		case ET_REL: printf("REL (Relocatable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN (Shared object file)\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default: printf("<unknown>\n"); break;
	}
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: Array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error opening file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Error reading ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("File is not an ELF file");
	}

	print_elf_header_info(&header);

	close(fd);
	return (0);
}
