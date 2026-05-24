#include "../include/linklist.h"
#include <assert.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  LinkedList *llist = NULL;
  char hello[]      = "Hello";
  ll_reserve(llist, &hello[0]);
  for (size_t i = 1; i < strlen(hello); i++) {
    add_element(llist, i, &hello[i]);
  }
  Node *curr = llist->head;
  while (curr != NULL) {
    printf("%c -> ", *(char *)(curr->data));
    curr = curr->next;
  }
  printf("NULL\n");
  free_ll(llist);
  return 0;
}
