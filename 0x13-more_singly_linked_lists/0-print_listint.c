#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list of integers.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *head)
{
    size_t node_count = 0;
    const listint_t *current_node = head;

    while (current_node != NULL)
    {
        printf("%d\n", current_node->n);
        node_count++;
        current_node = current_node->next;
    }

    return node_count;
}

