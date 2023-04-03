#include "lists.h"
/**
 * add_nodeint_end - add node at the end of the linked list
 * @head :pointer to first node in a linked list
 * @n: data to insert in the new mode created
 * Return: pointer to new node or NULL incase it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
		listint_t *temp = *head;

		newnode= malloc(sizeof(listint_t));

		if(!newnode)
			return(NULL);
		newnode->n = n;
		newnode->next = NULL;
		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}
		while(temp->next)
			temp = temp->next;

		temp->next =newnode;
		return (*head);
}
