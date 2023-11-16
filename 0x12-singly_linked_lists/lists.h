#ifndef LINKED
#define LINKED

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - this is singly linked list
 * @str: string - (malloc'ed string)
 * @len: this is the length of the string.
 * @next: this points to the next node.
 *
 * Description: this is singly linked list node struc.
 */

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /*LINKED*/
