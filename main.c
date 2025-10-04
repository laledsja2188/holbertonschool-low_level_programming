#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;


Node* create_node(int data)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}


void print_reverse(Node* head)
{
    if (head == NULL)
        return;

    print_reverse(head->next);
    printf("%d ", head->data);
}


void free_list(Node* head)
{
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void)
{
    
    Node *head = create_node(1);
    head->next = create_node(2);
    head->next->next = create_node(3);
    head->next->next->next = create_node(4);
    head->next->next->next->next = create_node(5);

   
    printf("Reverse order: ");
    print_reverse(head);
    printf("\n");

    
    free_list(head);

    return 0;
}
