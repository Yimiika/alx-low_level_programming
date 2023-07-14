#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "Usage: elf_header elf_filename\n");
    exit(98);
  }

  int fd = open(argv[1], O_RDONLY);
  if (fd == -1) {
    fprintf(stderr, "Could not open file: %s\n", argv[1]);
    exit(98);
  }

  Elf64_Ehdr elf_header;
  lseek(fd, 0, SEEK_SET);
  read(fd, &elf_header, sizeof(Elf64_Ehdr));

  printf("Magic: 0x%x\n", elf_header.e_ident[EI_MAG0]);
  printf("Class: %d\n", elf_header.e_flags);
  printf("Data: %d\n", elf_header.e_type);
  printf("Version: %d\n", elf_header.e_version);
  printf("OS/ABI: %d\n", elf_header.e_machine);
  printf("ABI Version: %d\n", elf_header.e_version);
  printf("Entry point address: 0x%lx\n", elf_header.e_entry);

  close(fd);
  return 0;
}
