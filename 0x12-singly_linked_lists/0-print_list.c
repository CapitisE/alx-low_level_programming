#include <stdio.h>
#include "lists.h"

/**
 * print_list - Function that prints all the elements of a given list
 * @h: Pointer to the given list
 *
 * Return: Number of nodes printed
 *
 */

size_t print_list(const list_t *h)
{
	size_t sll = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		sll++;
	}
	return (sll);
}
