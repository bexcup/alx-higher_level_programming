#include "lists.h"
/**
 * compare_list - Compare list
 * @head: Pointer to the list head
 * @half: Pointer to the list half node
 * Return: 1 if palindrome,
 *         Otherwise, 0.
 */
int compare_list(listint_t *head, listint_t *half)
{
	listint_t *cursor_1 = head;
	listint_t *cursor_2 = half;

	while (cursor_2)
	{
		if (cursor_1->n == cursor_2->n)
		{
			cursor_1 = cursor_1->next;
			cursor_2 = cursor_2->next;
		}

		else
			return (0);
	}

	if (cursor_2 == NULL)
		return (1);

	return (0);
}

/**
 * reverse_list - Reverse the order of the list
 * @head: Pointer to list
 * Return: Return the pointer to new head
 */
listint_t *reverse_list(listint_t *head)
{
	listint_t *prev = NULL;
	listint_t *next;
	listint_t *cursor;

	for (cursor = head; cursor != NULL;)
	{
		next = cursor->next;
		cursor->next = prev;
		prev = cursor;
		cursor = next;
	}

	return (prev);
}

/**
 * is_palindrome - Check if a singly linked list is the palindrome
 * @head: Pointer to list
 * Return: 0 if it is not a palindrome,
 *         Otherwise 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *cursor;
	int count_nod = 0, x = 0, y;
	listint_t *half_cursor;

	if (*head == NULL)
		return (1);

	for (cursor = *head; cursor != NULL; cursor = cursor->next)
		count_nod++;

	if (count_nod % 2 == 0)
		count_nod--;

	for (cursor = *head; x < count_nod / 2; cursor = cursor->next)
		x++;

	cursor->next = reverse_list(cursor->next);
	half_cursor = cursor->next;
	y = compare_list(*head, half_cursor);

	return (y);
}
