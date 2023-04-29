#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


size_t listint_len(const listint_t *P)
{
	size_t number_of_elements = 1;
	if (P == NULL)
		return (0);
	while (P->next != NULL)
	{
		/*count no of elements*/
		if (P->n != '\0')
			number_of_elements++;

		/*go to next node*/
		P = P->next;
	}

	return (number_of_elements);
}
