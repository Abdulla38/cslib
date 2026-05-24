#ifndef LINKLIST_H
#define LINKLIST_H

#include <stdio.h>

typedef struct Node {
  void *data;
  struct Node *next;
} Node;

typedef struct {
  Node *head;
  Node *tail;
  int size;
} LinkedList;

#define MALLOC_ERROR_TMP()                                                     \
  do {                                                                         \
    fprintf(stderr, "ERROR: could not allocate data. Buy more RAM.\n");        \
  } while (0)

#define ll_reserve(list, el)                                                   \
  do {                                                                         \
    (list) = (LinkedList *)malloc(sizeof(LinkedList));                         \
    if ((list) == NULL) {                                                      \
      MALLOC_ERROR_TMP();                                                      \
      break;                                                                   \
    }                                                                          \
                                                                               \
    (list)->head = (Node *)malloc(sizeof(Node));                               \
    if ((list)->head == NULL) {                                                \
      MALLOC_ERROR_TMP();                                                      \
      break;                                                                   \
    }                                                                          \
                                                                               \
    (list)->head->data = (el);                                                 \
    (list)->head->next = NULL;                                                 \
    (list)->tail = (list)->head;                                               \
    (list)->size = 1;                                                          \
  } while (0)

void add_element(LinkedList *list, int n, void *el);

#define free_ll(list)                                                          \
  do {                                                                         \
    Node *curr = (list)->head;                                                 \
    while (curr != NULL) {                                                     \
      Node *next = curr->next;                                                 \
      free(curr);                                                              \
      curr = next;                                                             \
    }                                                                          \
    free((list));                                                              \
  } while (0)

#endif // LINKLIST_H
