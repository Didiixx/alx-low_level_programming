#include "lists.h"


/**
 * add_dnodeint - add a new node at the beginning of the linked list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to the new node
 * author: diidixix
 * Return: pointer to the new node, or NULL on failure
 */
**Task: 0. Print list**

```c
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    int count;

    count = 0;

    if (h == NULL)
        return (count);

    while (h->prev != NULL)
        h = h->prev;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        count++;
        h = h->next;
    }

    return (count);
}
```


**Task: 1. List length**

```c
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
    int count;

    count = 0;

    if (h == NULL)
        return (count);

    while (h->prev != NULL)
        h = h->prev;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return (count);
}
```


**Task: 2. Add node**

```c
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new;
    dlistint_t *h;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->prev = NULL;
    h = *head;

    if (h != NULL)
    {
        while (h->prev != NULL)
            h = h->prev;
    }

    new->next = h;

    if (h != NULL)
        h->prev = new;

    *head = new;

    return (new);
}
