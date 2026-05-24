#include "../include/linklist.h"
#include <stdlib.h>

void add_element(LinkedList *list, int n, void *el) {
  Node *prev     = {0};
  Node *curr     = {0};
  Node *new_node = {0};

  if (list == NULL) return;

  if (n > list->size) n = list->size;
  if (n < 0) return;

  new_node = calloc(1, sizeof(Node));
  if (new_node == NULL) {
    MALLOC_ERROR_TMP();
    return;
  }
  new_node->data = el;

  prev = NULL;
  curr = list->head;
  for (int i = 0; i < n; i++) {
    prev = curr;
    curr = curr->next;
  }

  new_node->next = curr;

  if (prev == NULL)
    list->head = new_node;
  else
    prev->next = new_node;
  if (new_node->next == NULL) list->tail = new_node;

  list->size++;
}
