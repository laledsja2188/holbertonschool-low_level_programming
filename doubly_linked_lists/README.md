# Doubly Linked Lists

This project contains implementations of doubly linked list operations in C.

## Learning Objectives

- What is a doubly linked list
- How to use doubly linked lists
- Understanding the structure and operations of doubly linked lists

## Data Structure

```c
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Files

- `lists.h` - Header file containing function prototypes and structure definition
- `0-print_dlistint.c` - Function that prints all elements of a doubly linked list

## Requirements

- All files compiled on Ubuntu 20.04 LTS
- Code follows Betty style guidelines
- No global variables allowed
- Maximum 5 functions per file
- Only allowed standard library functions: malloc, free, printf, exit
