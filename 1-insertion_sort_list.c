#include "sort.h"

/**
 * swap_node - swap two nodes in a doubly linked list.
 * @head: address of the head of the linked list.
 * @a: address of the first node.
 * @b: address of the second node.
 *
 * Return: nothing.
 */
void swap_node(node* head, node* a, node* b)
{
	node* temp_head = head;

	if (a->prev != NULL)
	{
		a->prev->next = b;
	}
	else
	{
		head = b;
	}

	if (b->next != NULL)
	{
		b->next->prev = a;
	}

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
	listint_t *node, current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		        return;
	}
	listint_t *node = NULL;
	*current = *list;

	while (current != NULL)
	{
	listint_t *next = current->next;





















