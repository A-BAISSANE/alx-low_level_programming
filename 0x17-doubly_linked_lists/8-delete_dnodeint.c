#include <stddef.h>
#include <stdlib.h>
#include "your_dlistint_header.h" // Include your dlistint header file

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
    if (*head == NULL) {
        return -1; // Return -1 if the list is empty
    }
    
    if (index == 0) {
        dlistint_t *temp = *head;
        *head = (*head)->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
        return 1;
    }
    
    dlistint_t *current = *head;
    unsigned int count = 0;
    
    while (current != NULL && count < index) {
        current = current->next;
        count++;
    }
    
    if (current == NULL) {
        return -1; // Return -1 if the index is out of range
    }
    
    current->prev->next = current->next;
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }
    
    free(current);
    return 1;
}
