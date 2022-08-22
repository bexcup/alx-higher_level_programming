#include "lists.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: the pointer to the previous memory block
 * @old_size: the size of the old memory block
 * @new_size: the size of the new memory block
 *
 * Return: the pointer to the new memory block
 *         otherwise NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min_size = old_size < new_size ? old_size : new_size;
	unsigned int x;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		new_ptr = malloc(new_size);
		if (new_ptr != NULL)
		{
			for (x = 0; x < min_size; x++)
				*((char *)new_ptr + x) = *((char *)ptr + x);
			free(ptr);
			return (new_ptr);
		}
		free(ptr);
		return (NULL);
	}
	else
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
}

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: list head
 * Return: 0 if no,
 *         1 if yes
 */
int check_cycle(listint_t *list)
{
	listint_t *fast, *slow = list;

	if (list == NULL)
		return (0);

	fast = list->next;
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
			return (1);
		fast = fast->next->next;
		slow = slow->next;
	}
	return (0);
}
