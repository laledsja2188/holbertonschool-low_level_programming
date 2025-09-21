#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht = NULL;
    
    printf("Testing hash_table_delete with NULL...\n");
    hash_table_delete(ht);  /* Should not crash */
    printf("NULL test passed!\n");
    
    ht = hash_table_create(10);
    hash_table_set(ht, "test", "value");
    printf("Created and populated hash table\n");
    
    hash_table_delete(ht);  /* Should free everything */
    printf("Delete test passed!\n");
    
    return (EXIT_SUCCESS);
}