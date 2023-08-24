#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

void check_elf(unsigned char *e_ident)
{
    if (e_ident[EI_MAG0] != ELFMAG0 || e_ident[EI_MAG1] != ELFMAG1 ||
        e_ident[EI_MAG2] != ELFMAG2 || e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        exit(1);
    }
}

void print_magic(unsigned char *e_ident)
{
    printf("ELF Magic: ");
    for (int i = 0; i < EI_NIDENT; ++i)
        printf("%02x ", e_ident[i]);
    printf("\n");
}
void print_class(unsigned char *e_ident)
{
    printf("ELF Class: ");
    switch (e_ident[EI_CLASS])
    {
    case ELFCLASSNONE:
        printf("Invalid class\n");
        break;
    case ELFCLASS32:
        printf("32-bit\n");
        break;
    case ELFCLASS64:
        printf("64-bit\n");
        break;
    default:
        printf("Unknown class\n");
        break;
    }
}
void print_data(unsigned char *e_ident)
{
    printf("Data Encoding: ");
    switch (e_ident[EI_DATA])
    {
    case ELFDATANONE:
        printf("Invalid data encoding\n");
        break;
    case ELFDATA2LSB:
        printf("2's complement, little endian\n");
        break;
    case ELFDATA2MSB:
        printf("2's complement, big endian\n");
        break;
    default:
        printf("Unknown data encoding\n");
        break;
    }
}
void print_version(unsigned char *e_ident)
{
    printf("ELF Version: %d\n", e_ident[EI_VERSION]);
}

void print_osabi(unsigned char *e_ident)
{
    // Print the OS/ABI
    printf("OS/ABI: ");
    switch (e_ident[EI_OSABI])
    {
    case ELFOSABI_SYSV:
        printf("UNIX System V ABI\n");
        break;
    case ELFOSABI_HPUX:
        printf("HP-UX ABI\n");
        break;
    case ELFOSABI_NETBSD:
        printf("NetBSD ABI\n");
        break;
    case ELFOSABI_LINUX:
        printf("Linux ABI\n");
	        break;
    case ELFOSABI_SOLARIS:
        printf("Solaris ABI\n");
        break;
    case ELFOSABI_FREEBSD:
        printf("FreeBSD ABI\n");
        break;
    case ELFOSABI_OPENBSD:
        printf("OpenBSD ABI\n");
        break;
    default:
        printf("Unknown ABI\n");
        break;
    }
}
void print_type(unsigned int e_type, unsigned char *e_ident)
{
    printf("Type: ");
    switch (e_type)
    {
    case ET_NONE:
        printf("No file type\n");
        break;
    case ET_REL:
        printf("Relocatable file\n");
        break;
    case ET_EXEC:
        printf("Executable file\n");
        break;
    case ET_DYN:
        printf("Shared object file\n");
        break;
    case ET_CORE:
       printf("Core file\n");
        break;
    default:
        printf("Unknown file type\n");
        break;
    }
}
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
    printf("Entry point address: 0x%lx\n", e_entry);
}

void close_elf(int elf)
{
    close(elf);
}
int main(int argc, char *argv[])
{
    int fd;
    unsigned char e_ident[EI_NIDENT];
    Elf64_Ehdr elf_header;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./elf_info <file>\n");
        exit(1);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        exit(1);
    }

    if (read(fd, e_ident, EI_NIDENT) == -1)
    {
        perror("Error reading file");
        close_elf(fd);
        exit(1);
    }

    check_elf(e_ident);

    print_magic(e_ident);

    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) == -1)
    {
        perror("Error reading file");
        close_elf(fd);
        exit(1);
    }
    print_class(e_ident);

    print_data(e_ident);

    print_version(e_ident);

    print_osabi(e_ident);

    print_type(elf_header.e_type, e_ident);


    print_entry(elf_header.e_entry, e_ident);

    close_elf(fd);

    return 0;
}
