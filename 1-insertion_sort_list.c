#include "sort.h"
/**
 * insertion_sort_list - Entry point
 * @list: the list to sort
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *list;
	listint_t *ptr = *list;

	while (ptr != NULL)
	{
		temp = ptr;
		while (temp != NULL)
		{
			if (temp->prev != NULL && (temp->prev)->n > temp->n)
			{
				(temp->prev)->next = temp->next;
				if (temp->next != NULL)
					(temp->next)->prev = temp->prev;
				temp->next = temp->prev;
				temp->prev = (temp->prev)->prev;
				if (temp->prev != NULL)
					(temp->prev)->next = temp;
				(temp->next)->prev = temp;
				temp = temp->next;
				if (temp == *list)
					*list = temp->prev;
				print_list(*list);
			}
			temp = temp->prev;
		}
		ptr = (ptr)->next;
	}
}
