#include "dll.h"
#include <stdlib.h>

void destroyList(struct Node **head) {
  struct Node *curr = *head;
  while (curr != NULL) {
    struct Node *temp = curr->next;
    free(curr);
    curr = temp;
  }
  *head = NULL;
}
