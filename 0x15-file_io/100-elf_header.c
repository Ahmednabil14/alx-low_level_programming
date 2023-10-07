#include "main.h"
#include <elf.h>
void print_data(Elf64_Ehdr h);
void print_magic(Elf64_Ehdr h);
void print_class(Elf64_Ehdr h);
void print_version(Elf64_Ehdr h);
void print_osabi(Elf64_Ehdr h);
void print_type(Elf64_Ehdr h);
void print_abi(Elf64_Ehdr h);
void print_entry(Elf64_Ehdr h);
/**
 * print_entry - function that print Entry point address
 * @h: elf header
 * Return: void
 */
void print_entry(Elf64_Ehdr h)
{
	printf("  Entry point address:               ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
	{
		h.e_entry = ((h.e_entry << 8) & 0xFF00FF00) |
			((h.e_entry >> 8) & 0xFF00FF);
		h.e_entry = (h.e_entry << 16) | (h.e_entry >> 16);
	}
	if (h.e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("0x%x\n", (unsigned int)h.e_entry);
	}
	else
		printf("0x%x\n", (unsigned int)h.e_entry);
}
/**
 * print_type - function that print type
 * @h: elf header
 * Return: void
 */
void print_type(Elf64_Ehdr h)
{
	char *s = (char *) &h.e_type;
	int i = 0;

	printf("  Type:                              ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	if (s[i] == ET_NONE)
		printf("NONE (None)\n");
	if (s[i] == ET_REL)
		printf("REL (Relocatable file)\n");
	if (s[i] == ET_EXEC)
		printf("EXEC (Executable file)\n");
	if (s[i] == ET_DYN)
		printf("DYN (Shared object file)\n");
	if (s[i] == ET_CORE)
		printf("CORE (Core file)\n");
}
/**
 * print_abi - function that print abi version
 * @h: elf header
 * Return: void
 */
void print_abi(Elf64_Ehdr h)
{
	printf("  ABI Version:                       ");
	printf("%d\n", h.e_ident[EI_ABIVERSION]);
}
/**
 * print_osabi - function that print os abi
 * @h: elf header
 * REturn: void
 */
void print_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	if (h.e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	if (h.e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	if (h.e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	if (h.e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	if (h.e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	if (h.e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	if (h.e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	if (h.e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	if (h.e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	if (h.e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
}
/**
 * print_version - function that print version
 * @h: elf header
 * Return: void
 */
void print_version(Elf64_Ehdr h)
{
	printf("  Version:                           ");
	printf("%d (current)\n", h.e_ident[EI_VERSION]);
}
/**
 * print_magic - function that print magic
 * @h: elf header
 * Return: void
 */
void print_magic(Elf64_Ehdr h)
{
	int i;

	printf("  Magic:   ");
	for (i = 0 ; i < EI_NIDENT ; i++)
	{
		printf("%02x ", h.e_ident[i]);
		if (i == EI_NIDENT - 1)
		{
			printf("\n");
		}
	}
}
/**
 * print_class - function that print class
 * @h: elf header
 * Return: void
 */
void print_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	if (h.e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	if (h.e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	if (h.e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
}
/**
 * print_data - print data
 * @h: header
 * Return: void
 */
void print_data(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	if (h.e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	if (h.e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
}
/**
 * main - program that displays the information contained in the ELF
 * header at the start of an ELF file.
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t r;
	Elf64_Ehdr head;

	if (argc != 2)
		dprintf(STDERR_FILENO, "%s", "enter elf file\n"), exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "%s", "can not open the elf file\n");
		exit(98);
	}
	r = read(fd, &head, sizeof(head));
	if (r < 1 || r != sizeof(head))
	{
		dprintf(STDERR_FILENO, "%s", "can not read the file");
		exit(98);
	}
	if (head.e_ident[0] == 0x7f && head.e_ident[1] == 'E' &&
	    head.e_ident[2] == 'L' && head.e_ident[3] == 'F')
		printf("ELF Header:\n");
	else
		dprintf(STDERR_FILENO, "%s", "not ELF file");
	print_magic(head);
	print_class(head);
	print_data(head);
	print_version(head);
	print_osabi(head);
	print_abi(head);
	print_type(head);
	print_entry(head);
	if (close(fd))
		dprintf(STDERR_FILENO, "%s", "error close");
	return (0);
}
