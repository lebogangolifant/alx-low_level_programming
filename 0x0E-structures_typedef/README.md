
# 0x0E. C - Structures, typedef

C programming language is a machine-independent programming language that is mainly used to create many types of applications and operating systems such as Windows, and other complicated programs such as the Oracle database, Git, Python interpreter, and games.

## Concepts

- __C structures__
- __Typedef and structures__
- __C Structure Packing__

## Requirements

#### C

- Editors: [emacs](https://www.gnu.org/software/emacs/), [vi, vim](https://www.vim.org/)
- Files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Use `Betty` to check coding style. [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)

## Project Tasks

| TASK FILE                      | DESCRIPTION      |
|  -----------                   |  -----------     |
|[dog.h]()|Define a new type `struct dog` with the following elements:`name`, type = `char *` `age`, type = `float` `owner`, type = `char *`|
|[1-init_dog.c]()|Write a function that initialize a variable of type struct dog|
|[2-print_dog.c]()|Write a function that prints a `struct dog`|
|[dog.h]()|Define a new type dog_t as a new name for the type struct dog.|
|[4-new_dog.c]()|Write a function that creates a new dog.|
|[5-free_dog.c]()|Write a function that frees dogs.|

