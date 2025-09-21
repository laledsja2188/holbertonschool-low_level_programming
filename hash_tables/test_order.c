#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(16);
    hash_table_set(ht, "a", "first");
    hash_table_set(ht, "b", "second"); 
    hash_table_set(ht, "c", "third");
    
    printf("Hash table with size 16:\n");
    hash_table_print(ht);
    
    printf("\nIndividual indices:\n");
    printf("'a' index: %lu\n", key_index((unsigned char *)"a", 16));
    printf("'b' index: %lu\n", key_index((unsigned char *)"b", 16)); 
    printf("'c' index: %lu\n", key_index((unsigned char *)"c", 16));
    
    return (EXIT_SUCCESS);
}