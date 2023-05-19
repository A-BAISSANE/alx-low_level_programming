#include <stddef.h>
#include "your_dlistint_header.h" // Include your dlistint header file

size_t dlistint_len(const dlistint_t *h) {
    const dlistint_t *current = h;
    size_t count = 0;
    
    while (current != NULL) {
        count++;
        current = current->next;
    }
    
    return count;
}
