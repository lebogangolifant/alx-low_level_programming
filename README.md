# System engineering & DevOps 

C programming language is a machine-independent programming language that is mainly used to create many types of applications and operating systems such as Windows, and other complicated programs such as the Oracle database, Git, Python interpreter, and games.

## Resources

__read__ or __watch__:

- Learn [Why C Programming Is Awesome](https://intranet.alxswe.com/rltoken/WYdE1novaWa0yt5fzGvLBw)
- Online tutorial articles
- Youtube tutorials

## Project Objectives

- Entry point
- Print text
- Unary operator
- Compiling
- C coding style

## General Requirements

- Editors: [emacs](https://www.gnu.org/software/emacs/), [vi, vim](https://www.vim.org/)
- Files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Scripts should be two lines long: $ `wc -l <filename>`
- Use `Betty` to check coding style

## Installation
#### Betty Linter

To run the Betty linter just with command `betty <filename>`:

- Go to the [Betty](https://intranet.alxswe.com/rltoken/wQ4sMfsWfxvyfN67Sc11zA) repository
- Clone the [repo](https://intranet.alxswe.com/rltoken/wQ4sMfsWfxvyfN67Sc11zA) to your local machine
- `cd` into the Betty directory
- Install the linter with `sudo ./install.sh`
- `emacs` or `vi` create a new file called `betty`, and copy the script below:

```
  #!/bin/bash
  # Simply a wrapper script to keep you from having to use betty-style
  # and betty-doc separately on every item.
  # Originally by Tim Britton (@wintermanc3r), multiargument added by
  # Larry Madeo (@hillmonkey)

  BIN_PATH="/usr/local/bin"
  BETTY_STYLE="betty-style"
  BETTY_DOC="betty-doc"

  if [ "$#" = "0" ]; then
      echo "No arguments passed."
      exit 1
  fi

  for argument in "$@" ; do
      echo -e "\n========== $argument =========="
      ${BIN_PATH}/${BETTY_STYLE} "$argument"
      ${BIN_PATH}/${BETTY_DOC} "$argument"
  done
```
- Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`.
- Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`.
You can now type `betty <filename>` to run the Betty linter!

## Project Directories

| PROJECT                        | DIRECTORY | 
|  -----------                   |     -----------  |
| 1. __C - Hello, World__        | [0x00. C - Hello, World](https://github.com/lebogangolifant/alx-low_level_programming/tree/master/0x00-hello_world)|
|2. __Variables, if, else, while__ | [0x01. C - Variables, if, else, while](https://github.com/lebogangolifant/alx-low_level_programming/tree/master/0x01-variables_if_else_while)|











## Acknowledgements

[ALX Africa](https://www.alxafrica.com/)
