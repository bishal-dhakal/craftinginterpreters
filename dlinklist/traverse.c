#include "dll.h"
#include <stdio.h>
#include <stdlib.h>

void traverseForward(struct Node *head) {
  struct Node *curr = head;
  while (curr != NULL) {
    printf("%d->", curr->val);
    curr = curr->next;
  }
  printf("NULL\n");
}
