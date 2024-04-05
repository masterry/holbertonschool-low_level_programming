#include "lists.h"
/**
* listint_len - a function that returns the number
*  of elements in a linked listint_t list
* @h: input
* Return: 0
*/
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	if (h == \0)
		return (0);

	while (h != \0)
	{
		len++;
		h = h->next;
	}
	return (len);
}
