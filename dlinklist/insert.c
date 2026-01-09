#include "dll.h"
#include <stdio.h>
#include <stdlib.h>

struct Node *insertAfterValue(struct Node *head, int key, int data) {
  struct Node *curr = head;

  struct Node *newNode = malloc(sizeof(struct Node));
  if (!newNode) {
    printf("Memory allocation failed\n");
    return head;
  }

  // find node with val = key
  while (curr != NULL && curr->val != key) {
    curr = curr->next;
  }

  if (curr == NULL) {
    printf("Node with value 6 not found\n");
    return head;
  }

  newNode->val = data;

  newNode->next = curr->next;
  newNode->prev = curr;

  // beacuse if the curr.next is NULL, which wont have the prev.
  if (curr->next != NULL) {
    curr->next->prev = newNode;
  }

  // update curr.next at last so we donot lost/ override the curr-> next;
  curr->next = newNode;

  return head;
}
