#include "sort.h"

/**
 * swap_node - swap two nodes in a doubly linked lis
 * @a: address of the first node.
 * @b: address of the second node.
 *
 * Return: nothing.
 */
void swap_node(listint_t *a, listint_t *b)
{
	if (a->prev != NULL)
		a->prev->next = b;
	if (b->next != NULL)
		b->next->prev = a;

	a->next = b->next;
	b->prev = a->prev;
	b->next = a;
	a->prev = b;
}

/**
 * insertion_sort_list - Sorts doubly linked list of int using Insertion sort.
 * @list: double pointer to the head of the list.
 *
 * Return: nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next_node, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	next_node = *list;
	current = next_node->next;

	while (current != NULL)
	{
		tmp = current->next;

		while (current->prev != NULL && current->n < current->prev->n)
		{
			swap_node(current->prev, current);

			if (current->prev == NULL)
				*list = current;

			print_list(*list);

			current = current->prev;
		}

		current = tmp;
	}
}
