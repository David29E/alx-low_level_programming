#include "lists.h"
/*
 * print_list - Entry point
 * Description: Prints all the elements of list_t list
 * @h: Pointer to head of the list
 * Return: Number of nodes in list
 */

size_t print_list(const list_t *h)
{
		size_t elem;

			elem = 0;
				while (h != NULL)
						{
									if (h->str == NULL)
													printf("[%d] %s\n", 0, "(nil)");
											else
															printf("[%d] %s\n", h->len, h->str);
													h = h->next;
															elem++;
																}
					return (elem);
}
