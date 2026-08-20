#include "sort.h"

/**
 * swap - swap two neighbouring nodes in a linked list
 * @node1: first node
 * @node2: second node
 */
void swap(listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	if (node2->next)
		node2->next->prev = node1;
	node1->next = node2->next;
	node2->next = node1;
	node2->prev = node1->prev;
	node1->prev = node2;
}

/**
 * insertion_sort - sort a linked list by insertion sort
 * @list: pointer to linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list;
	listint_t *check;
	listint_t *check_prev;
	int i = 0;

	while (curr)
	{
		check = curr;
		check_prev = check->prev;

		while (check_prev && check_prev->n > check->n)
		{
			if (i == 0)
				curr = curr->next;
			swap(check_prev, check);
			check_prev = check_prev->prev->prev;
			i = 1;
			if (!check->prev)
				*list = check;
			print_list(*list);
		}

		if (i == 0)
			curr = curr->next;
		i = 0;
	}
}
