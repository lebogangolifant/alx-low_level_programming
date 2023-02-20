
# 0x00. C - Hello, World

C programming language is a machine-independent programming language that is mainly used to create many types of applications and operating systems such as Windows, and other complicated programs such as the Oracle database, Git, Python interpreter, and games.

## Resources

__read__ or __watch__:

- Learn [Why C Programming Is Awesome](https://intranet.alxswe.com/rltoken/WYdE1novaWa0yt5fzGvLBw)

OR  

- Youtube 
- Tutorial articles and more...

__man__ or __help__:

- `gcc`
- `printf (3)`
- `puts`
- `putchar`

## Requirements

#### C

- Editors: [emacs](https://www.gnu.org/software/emacs/), [vi, vim](https://www.vim.org/)
- Files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Use `Betty` to check coding style. [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)

#### Shell

- Editors: [emacs](https://www.gnu.org/software/emacs/), [vi, vim](https://www.vim.org/)
- The first line of all your files should be: `#!/bin/bash`
- Scripts should be two lines long: $ `wc -l <filename>`
- Scripts tested on: __Ubuntu 20.04 LTS__

## Project Tasks

| TASK FILE                      | DESCRIPTION      | 
|  -----------                   |  -----------     |
|[0-preprocessor](https://github.com/lebogangolifant/alx-low_level_programming/blob/master/0x00-hello_world/0-preprocessor)|Write a script that runs a C file through the preprocessor and save the result into another file. The C file name will be saved in the variable `$CFILE`. The output should be saved in the file `c`|
|[1-compiler](https://github.com/lebogangolifant/alx-low_level_programming/blob/master/0x00-hello_world/1-compiler)|Write a script that compiles a C file but does not link. The C file name will be saved in the variable `$CFILE`. The output file should be named the same as the C file, but with the extension `.o` instead of `.c.`. Example: if the C file is  `main.c`, the output file should be `main.o`|
|[2-assembler](https://github.com/lebogangolifant/alx-low_level_programming/blob/master/0x00-hello_world/2-assembler)|Write a script that generates the assembly code of a C code and save it in an output file. The C file name will be saved in the variable `$CFILE`. The output file should be named the same as the C file, but with the extension `.s` instead of `.c`. Example: if the C file is `main.c`, the output file should be `main.s`|
|[3-name](https://github.com/lebogangolifant/alx-low_level_programming/blob/master/0x00-hello_world/3-name)|Write a script that compiles a C file and creates an executable named `cisfun`. The C file name will be saved in the variable `$CFILE`|
|[4-puts.c](https://github.com/lebogangolifant/alx-low_level_programming/blob/master/0x00-hello_world/4-puts.c)|Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line. Use the function `puts`. You are not allowed to use `printf`.Your program should end with the value `0`|
|[5-printf.c](https://github.com/lebogangolifant/alx-low_level_programming/blob/master/0x00-hello_world/5-printf.c)|Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line. Use the function `printf`. You are not allowed to use the function `puts`. Your program should return `0`. Your program should compile without warning when using the `-Wall gcc` option|
|[6-size.c]()|Write a C program that prints the size of various types on the computer it is compiled and run on. Warnings are allowed. Your program should return `0`. You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32 gcc` option|
|[100-intel](https://github.com/lebogangolifant/alx-low_level_programming/blob/master/0x00-hello_world/100-intel)|Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file. The C file name will be saved in the variable `$CFILE`. The output file should be named the same as the C file, but with the extension `.s` instead of `.c`. Example: if the C file is `main.c`, the output file should be `main.s`|
|[101-quote.c](https://github.com/lebogangolifant/alx-low_level_programming/blob/master/0x00-hello_world/101-quote.c)|Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.|











