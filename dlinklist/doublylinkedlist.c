#include "dll.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  // Allocate all nodes on heap
  struct Node *head = malloc(sizeof(struct Node));
  struct Node *first = malloc(sizeof(struct Node));
  struct Node *second = malloc(sizeof(struct Node));
  struct Node *third = malloc(sizeof(struct Node));
  struct Node *forth = malloc(sizeof(struct Node));
  struct Node *last = malloc(sizeof(struct Node));

  // Set values and links
  head->val = 1;
  head->prev = NULL;
  head->next = first;
  first->val = 2;
  first->prev = head;
  first->next = second;
  second->val = 3;
  second->prev = first;
  second->next = third;
  third->val = 4;
  third->prev = second;
  third->next = forth;
  forth->val = 5;
  forth->prev = third;
  forth->next = last;
  last->val = 6;
  last->prev = forth;
  last->next = NULL;

  int lengthOfDLL = length(head);
  printf("%d", lengthOfDLL);

  destroyList(&head);

  return 0;
}
