



# 0x18. C - Dynamic libraries

C programming language is a machine-independent programming language that is mainly used to create many types of applications and operating systems such as Windows, and other complicated programs such as the Oracle database, Git, Python interpreter, and games.

## Concepts

- __C__
- __Create dynamic libraries on Linux__

## Requirements

#### C

- Editors: [emacs](https://www.gnu.org/software/emacs/), [vi, vim](https://www.vim.org/)
- Files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Use `Betty` to check coding style. [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- The only C standard library functions allowed are `malloc`, `free`, `printf` and `exit`.


## Tasks

### Task 0: A library is not a luxury but one of the necessities of life

**Task Description:**
Create the dynamic library `libdynamic.so` containing various functions that will be used in future tasks.

**Files:** `main.h`, `libdynamic.so`

**Usage:**
To compile the library to create the dynamic library libdynamic.so , run the following command:
```
$ gcc -shared -o libdynamic.so *.o
```

### Task 1: Create a dynamic library from .c files

**Task Description:**
Create a script that creates a dynamic library called `liball.so` from all the `.c` files in the current directory.

**Script:** `1-create_dynamic_lib.sh`

**Usage:**
To create the dynamic library, run the following command:
```
$ ./1-create_dynamic_lib.sh
```

### Task 2: Creating a dynamic library for Python

**Task Description:**
Create a dynamic library that contains C functions that can be called from Python. The library should include various arithmetic operations such as addition, subtraction, multiplication, division, and modulo.

**Library:** `100-operations.so`

**Test File:** `100-tests.py`

**Usage:**
1. Compile the dynamic library using the following command:
```
$ gcc -Wall -Werror -Wextra -pedantic -shared -o 100-operations.so -fPIC 100-operations.c
```
2. Run the test file to see the results:
```
$ python3 100-tests.py
```

### Task 3: Winning the Giga Millions Jackpot

**Task Description:**
Create a shell script that can help win the Giga Millions Jackpot. The script should be able to make the winning numbers appear when the `gm` program is run. The script is restricted to a maximum of three lines and can only execute two commands. The script will be executed on the same server as the `gm` program.

**Script:** `101-make_me_win.sh`

**Usage:**
TODO



