#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - counts the number of unique
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t
 *
 * Return: If the list is not looped - 0,
 * Otherrwise - the number of unique notes in the listint_t
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *cheetah, *tiger;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
	return (0);
cheetah = head->next;
tiger = (head->next)->next;
while (tiger)
{
	if (cheetah == tiger)
	{
		cheetah = head;
		while (cheetah != tiger)
		{
			nodes++;
			cheetah = cheetah->next;
			tiger = tiger->next;
		}
		cheetah = cheetah->next;
		while (cheetah != tiger)
		{
			nodes++;
			cheetah = cheetah->next;
		}
		return (nodes);
	}
	cheetah = cheetah->next;
	tiger = (tiger->next)->next;
}
return (0);
}
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list safe
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;
nodes = looped_listint_len(head);
if (nodes == 0)
{
	for (; head != NULL; nodes++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
}
else
{
	for (index = 0; index < nodes; index++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}

