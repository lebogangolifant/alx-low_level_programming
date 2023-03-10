
# 0x09. C - Static libraries

C programming language is a machine-independent programming language that is mainly used to create many types of applications and operating systems such as Windows, and other complicated programs such as the Oracle database, Git, Python interpreter, and games.

## Concepts

- __C static libraries__
- __Static and Dynamic linking__
- __Using A “C” Library In A Program__

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

### Creating and linking static library

- create header file to store c program function prototypes

    ``` $ vi main.h ```

- impliment/create c program function files

    ``` $ vi uppercase.c ``` 

- convert c program function into object file

    ```
    $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

	OR

    $ gcc -c uppercase.c -o uppercase.o 
    $ ls 
    uppercase.o
    ```

- convert all object file into static library 
 
    ```
    $ ar -rc static_lib.a *.o

	OR
    
    $ ar rcs static_lib.a uppercase.o
    $ ls 
    staticl_ib.a
    ```

- create the main c program function file to test all the c program functions

    ```
    $ vi main.c
    ```

- convert main c program function file into an object file

    ```
    $ gcc -c main.c -o main.o
    $ ls 
    main.o
    ```

### Linking

- link the main fuction object file to static library

    ```
    $ gcc -o main main.o -L static_lib.a
    ```

- run the main c program function executable file to output the c program result

    ```
    $ ./main
    ```

## Project Tasks

| TASK FOLDER                      | DESCRIPTION      |
|  -----------                   |  -----------     |



