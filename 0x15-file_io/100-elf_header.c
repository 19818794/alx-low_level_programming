#include "main.h"

/**
 * main - Entry point.
 * @argc: the number of arguments supplied to the program.
 * @argv: array of pointers to the strings which are those arguments.
 *
 * Description: displays the information contained in the ELF header
 * at the start of an ELF file.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Error: Usage: elf_header elf_filename\n");
		exit(98);
	}
	_display_elf_header(argv[1]);
	return (0);
}

/**
 * _display_elf_header - displays the information contained in the ELF
 * in the same as readelf -h format (version 2.26.1).
 * @filename: the name of the elf file.
 *
 * Return: void.
 */
void _display_elf_header(char *filename)
{
	Elf64_Ehdr header;
	int f, bytes_read, i, CPU_mode, endianness;

	f = open(filename, O_RDONLY);
	if (f == -1)
		fprintf(stderr, "Error: Cannot open file\n"), exit(98);
	bytes_read = read(f, &header, sizeof(header));
	if (bytes_read != sizeof(header))
	{
		close(f);
		fprintf(stderr, "Error: Cannot read ELF header\n"), exit(98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
		fprintf(stderr, "Error: Not an ELF file\n"), exit(98);
	printf("%s ", "ELF Header:\n  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", header.e_ident[i],
				i < (EI_NIDENT - 1) ? ' ' : '\n');
	printf("  %-34s ", "Class:");
	(header.e_ident[EI_CLASS] == ELFCLASS32) ? printf("ELF32\n") :
	(header.e_ident[EI_CLASS] == ELFCLASS64) ? printf("ELF64\n") :
	printf("<unknown: %x>\n", header.e_ident[EI_CLASS]);
	CPU_mode = header.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32;
	printf("  %-34s ", "Data:");
	header.e_ident[EI_DATA] == ELFDATA2LSB ?
	printf("2's complement, little endian\n") :
	(header.e_ident[EI_DATA] == ELFDATA2MSB) ?
	printf("2's complement, big endian\n") :
	printf("Invalid data encoding\n");
	endianness = header.e_ident[EI_DATA] == ELFDATA2MSB ? 1 : 0;
	printf("  %-34s %u%s\n", "Version:", header.e_ident[EI_VERSION],
	header.e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
	_print_elf_osabi(&header);
	printf("  %-34s %u\n", "ABI Version:", header.e_ident[EI_ABIVERSION]);
	_print_elf_type(&header, endianness);
	_print_elf_entry(&header, CPU_mode, endianness), close(f);
}

/**
 * _print_elf_osabi - prints ELF OS/ABI.
 * @elf_header: the ELF header.
 *
 * Return: void.
 */
void _print_elf_osabi(Elf64_Ehdr *elf_header)
{
	const char *os_collection[19] = {
		"UNIX - System V", "UNIX - HP-UX", "UNIX - NetBSD",
		"UNIX - GNU", "<unknown: 4>", "<unknown: 5>", "UNIX - Solaris",
		"UNIX - AIX", "UNIX - IRIX", "UNIX - FreeBSD", "UNIX - Tru64",
		"Novell - Modesto", "UNIX - OpenBSD", "VMS - OpenVMS",
		"HP - Non-Stop Kernel", "AROS", "FenixOS", "Nuxi CloudABI",
		"Stratus Technologies OpenVOS"};

	printf("  %-34s ", "OS/ABI:");
	if (elf_header->e_ident[EI_OSABI] < 19)
		printf("%s\n", os_collection[
				(unsigned int)elf_header->e_ident[EI_OSABI]]);
	else
		printf("<unknown: %x>\n", elf_header->e_ident[EI_OSABI]);
}

/**
 * _print_elf_type - prints ELF type.
 * @elf_header: the ELF header.
 * @endian_val: endianness.
 *
 * Return: void.
 */
void _print_elf_type(Elf64_Ehdr *elf_header, int endian_val)
{
	char *type_collection[5] = {
		"NONE (No file type)", "REL (Relocatable file)",
		"EXEC (Executable file)", "DYN (Shared object file)",
		"CORE (Core file)"};

	if (endian_val == 1)
		elf_header->e_type >>= 8;
	printf("  %-34s ", "Type:");
	if (elf_header->e_type < 5)
		printf("%s\n", type_collection[elf_header->e_type]);
	else if (elf_header->e_type >= ET_LOOS && elf_header->e_type <= ET_HIOS)
		printf("OS Specific: (%4x)\n", elf_header->e_type);
	else if (elf_header->e_type >= ET_LOPROC)
		printf("Processor Specific: (%4x)\n", elf_header->e_type);
	else
		printf("<unknown: %x>\n", elf_header->e_type);
}

/**
 * _print_elf_entry - prints entry point address.
 * @elf_header: the ELF header.
 * @mode: 32 or 64 bit mode.
 * @endian_val: endianness.
 *
 * Return: void.
 */
void _print_elf_entry(Elf64_Ehdr *elf_header, int mode, int endian_val)
{
	printf("  %-34s ", "Entry point address:");
	if (endian_val == 1)
	{
		elf_header->e_entry = ((elf_header->e_entry << 8) & 0xFF00FF00)
			| ((elf_header->e_entry >> 8) & 0xFF00FF);
		elf_header->e_entry = (elf_header->e_entry << 16)
			| (elf_header->e_entry >> 16);
	}
	if (mode == 32)
		printf("%#x\n", (unsigned int)elf_header->e_entry);
	else
		printf("%#lx\n", elf_header->e_entry);
}
