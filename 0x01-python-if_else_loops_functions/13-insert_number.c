#include "lists.h"
/**
 * insert_node - adds a new int node in numeric order
 * @head: pointer to sorted list
 * @number: int to add
 * Return: pointer to list
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *index = *head;
	listint_t *prev = *head;
	listint_t *num = malloc(sizeof(listint_t));

	if (!num || *head == NULL)
	{
		free(num);
		return (NULL);
	}
	while (index->next)
	{
		if (index->n < number)
		{
			prev = index;
			index = index->next;
			prev->next = index;
		}

		else
		{
			if (prev == *head)
				*head = num;
			else
				prev->next = num;
			num->n = number;
			num->next = index;
			return (num);
		}
	}
	index->next = num;
	num->n = number;
	num->next = NULL;
	return (num);
}
