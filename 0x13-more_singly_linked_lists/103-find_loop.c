#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *listed, *lists;
if (head == NULL || head->next == NULL)
{
return (NULL);
}
listed = head->next;
lists = (head->next)->next;
while (lists)
{
if (listed == lists)
{
listed = head;
while (listed != lists)
{
listed = listed->next;
lists = lists->next;
}
return (listed);
}
listed = listed->next;
lists = (lists->next)->next;
}
return (NULL);
}
