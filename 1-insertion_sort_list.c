#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked
 * list of integers in ascending order
 * @list: head linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;

	if (!list || !(*list) || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		while (current->prev && (current->n < current->prev->n))
		{
			swap(current);
			if (current->prev == NULL)
				*list = current;
			print_list(*list);
		}
		current = current->next;
	}
}

/**
 * swap - swap nodes
 * @current: node current to swap
 */
void swap(listint_t *current)
{
	listint_t *tmp = NULL;

	tmp = current->prev;
	tmp->next = current->next;
	current->next = tmp;
	current->prev = tmp->prev;
	tmp->prev = current;

	if (tmp->next != NULL)
		tmp->next->prev = tmp;

	if (current->prev != NULL)
		current->prev->next = current;
}
