#include "dll.h"
#include <stdio.h>

int length(struct Node *head) {
  struct Node *curr = head;
  int counter = 0;
  while (curr != NULL) {
    counter = counter + 1;
    curr = curr->next;
  }
  return counter;
}
