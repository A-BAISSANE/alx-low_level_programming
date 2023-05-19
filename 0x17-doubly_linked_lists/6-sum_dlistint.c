#include <stddef.h>
#include "your_dlistint_header.h" // Include your dlistint header file

int sum_dlistint(dlistint_t *head) {
    if (head == NULL) {
        return 0; // Return 0 if the list is empty
    }
    
    int sum = 0;
    dlistint_t *current = head;
    
    while (current != NULL) {
        sum += current->n;
        current = current->next;
    }
    
    return sum;
}
