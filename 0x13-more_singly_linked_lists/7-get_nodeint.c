#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
 unsigned int i = 0;
 listint_t *temp = head;
 while (temp && i < index)
 {
 temp = temp->next;
 i++;
 }
 return (temp ? temp : NULL);
}
=====================================
8-sum_listint.c
#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
 int sum = 0;
 listint_t *temp = head;
 while (temp)
 {
 sum += temp->n;
 temp = temp->next;
 }
 return (sum);
}

