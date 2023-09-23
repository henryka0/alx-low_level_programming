#include <stdlib.h>
#include "lists.h"

size_t free_listint_safe(listint_t **h) {
    size_t size = 0;
    listint_t *current;

    while (*h) {
        current = *h;
        *h = current->next;
        free(current);
        size++;
    }

    *h = NULL;  // Set the head to NULL
    return size;
}
