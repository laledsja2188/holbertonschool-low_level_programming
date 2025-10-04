# Sorting Algorithms

This project implements various sorting algorithms in C.

## Files

- `sort.h` - Header file containing function prototypes
- `print_array.c` - Helper function to print arrays
- `0-bubble_sort.c` - Bubble sort implementation
- `0-O` - Time complexity of bubble sort algorithm
- `0-main.c` - Test file for bubble sort

## Bubble Sort

### Algorithm Description
Bubble sort repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

### Time Complexity (0-O)
- **Best case**: O(n) - when the array is already sorted
- **Average case**: O(n²) - when elements are in random order
- **Worst case**: O(n²) - when the array is sorted in reverse order

### Space Complexity
O(1) - only uses a constant amount of additional memory space

## Compilation
```bash
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
```

## Usage
```bash
./bubble
```