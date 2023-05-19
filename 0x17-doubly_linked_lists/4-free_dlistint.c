#include <stdlib.h>
#include "your_dlistint_header.h" // Include your dlistint header file

void free_dlistint(dlistint_t *head) {
    dlistint_t *current = head;
    while (current != NULL) {
        dlistint_t *temp = current;
        current = current->next;
        free(temp);
    }
}
