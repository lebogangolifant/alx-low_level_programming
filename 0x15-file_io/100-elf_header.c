#include "main.h"
#include "elf.h"

/**
 * error - print error message to stderr and exit with status code 98
 * @msg: error message to print
 *
 * Return: none
 */

void error(char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * display_elf_header - display information contained in ELF header of file
 * @filename: name of ELF file to display header of
 *
 * Return: none
 */

void display_elf_header(char *filename)
{
	int i;
	Elf64_Ehdr elf_header;
	Elf64_Ehdr *header = &elf_header;
	int file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
		error("Error: could not open file");

	/*Elf64_Ehdr elf_header;*/

	if (read(file_desc, &elf_header, sizeof(elf_header))
			!= sizeof(elf_header))
		error("Error: could not read ELF header");

	if (elf_header.e_ident[0] != 0x7f || elf_header.e_ident[1] != 'E'
			|| elf_header.e_ident[2] != 'L' ||
			elf_header.e_ident[3] != 'F')
		error("Error: file is not an ELF file");

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header.e_ident[i]);
	printf("\n");

	/*Elf64_Ehdr *header = &elf_header;*/

	printf("Class:                             %s\n",
			header->e_ident[4] == 1 ? "ELF32" : "ELF64");
	printf("Data:                              %s\n",
			header->e_ident[5] == 1 ? "little endian" :
			"big endian");
	printf("Version:                           %d\n", header->e_ident[6]);
	printf("OS/ABI:                            %d\n", header->e_ident[7]);
	printf("ABI Version:                       %d\n", header->e_ident[8]);
	printf("Type:                              %d\n", header->e_type);
	printf("Entry point address:               %#lx\n", header->e_entry);

	close(file_desc);
}

/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments passed to the program
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	if (argc != 2)
		error("Usage: elf_header elf_filename");

	display_elf_header(argv[1]);
	return (0);
}

