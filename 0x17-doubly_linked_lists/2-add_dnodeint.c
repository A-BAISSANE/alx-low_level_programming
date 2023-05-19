#include <stdio.h>
#include <stdlib.h>
#include "your_dlistint_header.h" // Include your dlistint header file

dlistint_t *add_dnodeint(dlistint_t **head, const int n) {
    dlistint_t *newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL) {
        return NULL; // Failed to allocate memory for the new node
    }
    
    newNode->n = n;
    newNode->prev = NULL;
    newNode->next = *head;
    
    if (*head != NULL) {
        (*head)->prev = newNode;
    }
    
    *head = newNode;
    
    return newNode;
}
