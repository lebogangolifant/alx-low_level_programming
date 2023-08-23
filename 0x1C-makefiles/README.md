# 0x1C. C - Makefiles


This project comprises multiple tasks focused on creating and managing Makefiles for compiling C code and performing various build and cleanup operations. Each task is associated with specific requirements and constraints, facilitating the development of effective Makefiles.


## Requirements

- OS: Ubuntu 20.04 LTS
- Compiler: Version of gcc: 9.3.0
- Version of make: GNU Make 4.2.1
- Source files: main.c, school.c
- Compiler flags: -Wall -Werror -Wextra -pedantic

## Usage

To build the project executable, run:

```sh
make all
```

To clean temporary files and the executable, run:

```sh
make clean
```

To clean object files, run:

```sh
make oclean
```

To perform a full cleanup (temporary files, executable, and object files), run:

```sh
make fclean
```

To force recompilation of all source files, run:

```sh
make re
```


## Tasks

| Task Files         | Description |
|--------------------|-------------|
| 0-Makefile         | Create a basic Makefile that compiles source files into an executable named "school". |
| 1-Makefile         | Enhance the Makefile from Task 0 by using variables for the compiler and source files. |
| 2-Makefile         | Build on the previous tasks by including variables for object files and the executable name. |
| 3-Makefile         | Add more functionality to the Makefile by incorporating rules for cleaning, object file cleanup, and recompilation. |
| 4-Makefile         | Expand the Makefile with compiler flags and improve the cleanup rules using $(RM). |
| 5-island_perimeter.py | Implement a Python function `island_perimeter` that calculates the perimeter of an island described in a grid. |
| 100-Makefile       | Develop an advanced Makefile that meets complex requirements such as managing dependencies, cleaning, and recompilation. |
