#include <stddef.h>
#include "your_dlistint_header.h" // Include your dlistint header file

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) {
    dlistint_t *current = head;
    unsigned int count = 0;
    
    while (current != NULL && count < index) {
        current = current->next;
        count++;
    }
    
    return current;
}
