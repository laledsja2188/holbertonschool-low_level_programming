# Hash Tables

This project implements hash tables in C, using chaining collision resolution.

## Files

- `hash_tables.h` - Header file with structure definitions and function prototypes
- `0-hash_table_create.c` - Function to create a hash table

## Function Descriptions

### `hash_table_create`
Creates a hash table with a given size.
- **Prototype**: `hash_table_t *hash_table_create(unsigned long int size);`
- **Parameters**: `size` - the size of the array
- **Returns**: A pointer to the newly created hash table, or NULL if something went wrong

## Compilation
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a
```