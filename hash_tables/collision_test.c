#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check collision keys have same index
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    printf("hetairas index: %lu\n", key_index((unsigned char *)"hetairas", 1024));
    printf("mentioner index: %lu\n", key_index((unsigned char *)"mentioner", 1024));
    
    printf("heliotropes index: %lu\n", key_index((unsigned char *)"heliotropes", 1024));
    printf("neurospora index: %lu\n", key_index((unsigned char *)"neurospora", 1024));
    
    return (EXIT_SUCCESS);
}