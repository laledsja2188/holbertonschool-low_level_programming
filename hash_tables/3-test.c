#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for collisions and updates
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    
    printf("Setting betty -> cool: %d\n", hash_table_set(ht, "betty", "cool"));
    printf("Setting hetairas -> test1: %d\n", hash_table_set(ht, "hetairas", "test1"));
    printf("Setting mentioner -> test2: %d\n", hash_table_set(ht, "mentioner", "test2"));
    
    /* Test updating existing key */
    printf("Updating betty -> awesome: %d\n", hash_table_set(ht, "betty", "awesome"));
    
    /* Test empty value */
    printf("Setting empty -> (empty): %d\n", hash_table_set(ht, "empty", ""));
    
    /* Test invalid inputs */
    printf("Setting NULL key: %d\n", hash_table_set(ht, NULL, "value"));
    printf("Setting empty key: %d\n", hash_table_set(ht, "", "value"));
    printf("Setting on NULL table: %d\n", hash_table_set(NULL, "key", "value"));
    
    return (EXIT_SUCCESS);
}