#include "sort.h"

/**
 * insertion_sort_list - sort linkedlist using insertion
 * @list: unsorted list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list, *temp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = current->next;
	while (current)
	{
		temp = current->prev;
		while (current->prev && current->n < (current->prev)->n)
		{
			swap_nodes(list, temp, current);
			print_list(*list);
			temp = current->prev;
		}
		current = current->next;
	}
}

/**
 * swap_node - ...
 * @list: ...
 * @first: ...
 * @second: ...
 * Return - void
 */
void swap_nodes(listint_t **list, listint_t *first, listint_t *second)
{
	if (!first || !second)
		return;
	if (first->prev)
		first->prev->next = second;
	else
		*list = second;
	if (second->next)
		second->next->prev = first;
	first->next = second->next;
	second->prev = first->prev;
	second->next = first;
	first->prev = second;
}
