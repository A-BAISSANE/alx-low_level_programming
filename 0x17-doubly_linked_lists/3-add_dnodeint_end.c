#include <stdio.h>
#include <stdlib.h>
#include "your_dlistint_header.h" // Include your dlistint header file

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n) {
    dlistint_t *newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL) {
        return NULL; // Failed to allocate memory for the new node
    }
    
    newNode->n = n;
    newNode->next = NULL;
    
    if (*head == NULL) {
        // The list is empty, make the new node the head
        newNode->prev = NULL;
        *head = newNode;
    } else {
        dlistint_t *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        
        current->next = newNode;
        newNode->prev = current;
    }
    
    return newNode;
}
