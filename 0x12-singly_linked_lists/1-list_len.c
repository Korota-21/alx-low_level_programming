
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len -print list.
 *Description: Function that prints content of a single linked list
 * @h: pointer to a structure typedef list_t
 * Return: the number of nodes
 **/


size_t list_len(const list_t *h)
{
const  list_t *temp = h;

size_t size;

for (size = 0; temp != NULL; size++)
{

temp = temp->next;

}
return (size);
}
