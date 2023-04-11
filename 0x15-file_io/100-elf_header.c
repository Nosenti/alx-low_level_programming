#include "main.h"
#include <elf.h>

/**
 * print_elf_header - print header
 * @header: header
 * Return: void
 */

void print_elf_header(Elf64_Ehdr *header) {
    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("Class:                             ");
    printf("%s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");

    printf("Data:                              ");
    printf("%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");

    printf("Version:                           ");
    printf("%d %s\n", header->e_ident[EI_VERSION], header->e_ident[EI_VERSION] == EV_CURRENT ? "(current)" : "");

    printf("OS/ABI:                            ");
    printf("UNIX - System V\n"); // Assuming UNIX - System V

    printf("ABI Version:                       ");
    printf("%d\n", header->e_ident[EI_ABIVERSION]);

    printf("Type:                              ");
    printf("%s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "DYN (Shared object file)");

    printf("Entry point address:               ");
    printf("%#018lx\n", header->e_entry);
}

/**
 * main - main function
 * @argc: args count
 * @argv: args vector
 * Return: int
 */

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        exit(98);
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        exit(98);
    }

    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        perror("Error reading ELF header");
        close(fd);
        exit(98);
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        exit(98);
    }

    print_elf_header(&header);
    close(fd);

    return (0);
}
