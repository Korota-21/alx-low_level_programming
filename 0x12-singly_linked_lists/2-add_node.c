#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"



/**
 * add_node -add node to list.
 *Description: Function that adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer
 * @str: string value in the structure
 * Return: the address of the new element or NULL if fail
 **/


list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
	return (NULL);
}
	new_node->str = strdup(str);
	new_node->next = (*head);
	(*head) = new_node;

return (new_node);
}
