# 0x1E. C - Search Algorithms

This repository contains a collection of search algorithms implemented in C, with a focus on searching in arrays, linked lists, and skip lists.

## Table of Contents

- [Description](#description)
- [Requirements](#requirements)
- [Usage](#usage)
- [Tasks](#tasks)
- [Time Complexities](#time-complexities)

## Description

The project implements various search algorithms, including linear search, binary search, jump search, interpolation search, exponential search, and skip list search. The implementations are provided in C and are designed to search for specific values in arrays, singly linked lists, and skip lists.

## Requirements

-  All your files must be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
-  Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- Use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.)

## Usage

To compile and run the search algorithms, use the provided Makefile. For example:

```bash
make 0-linear
./0-linear
```

This will compile and run the linear search algorithm. Replace `0-linear` with the desired task number to compile and run other algorithms.

## Project Tasks

| File Name              | Description                                      |
|----------------------- |-------------------------------------------------- |
| 0-linear.c             | Implement linear search in an array              |
| 1-binary.c             | Implement binary search in a sorted array        |
| 2-O                     | Explain the time complexity of a binary search |
| 3-jump.c               | Implement jump search in an array                |
| 4-O                     | Explain the time complexity of a jump search   |
| 5-jump_list.c        | Implement jump search in a singly linked list   |
| 6-O                     | Explain the time complexity of jump search in a singly linked list |
| 7-interpolation.c   | Implement interpolation search in an array       |
| 8-O                     | Explain the time complexity of interpolation search |
| 9-interpolation.c   | Implement interpolation search in an array       |
| 10-exponential.c   | Implement exponential search in an array         |
| 11-O                   | Explain the time complexity of exponential search |
| 11-O                   | Explain the time complexity of an advanced binary search |
| 12-O                   | Explain the time complexity of an advanced binary search |
| 12-advanced_binary.c | Implement advanced binary search in an array    |
| 13-O                   | Explain the time complexity of a jump search in a singly linked list |
| 13-O                   | Explain the time complexity of a jump search in a singly linked list |
| 13-jump_list.c        | Implement jump search in a singly linked list   |
| 14-O                   | Explain the time complexity of a jump search in a skip list with an express lane |
| 14-linear_skip.c    | Implement linear skip search in a skip list      |

## Time Complexities

- Linear Search: O(n)
- Binary Search: O(log n)
- Jump Search (Array): O(√n)
- Jump Search (Singly Linked List): O(√n * log n)
- Interpolation Search: O(log log n)
- Exponential Search: O(log n)
- Advanced Binary Search: O(log n)
- Jump Search (Skip List): O(√n * log n)
