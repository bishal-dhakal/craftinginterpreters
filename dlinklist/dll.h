#ifndef DLL_H
#define DLL_H

/* ==============================
   Doubly Linked List Node
   ============================== */
struct Node {
  int val;
  struct Node *prev;
  struct Node *next;
};

/* ==============================
   Insertion Operations
   ============================== */

/* Insert a node at the beginning of the list */
struct Node *insertAtBeginning(struct Node *head, int val);

/* Insert a node at the end of the list */
struct Node *insertAtEnd(struct Node *head, int val);

/* Insert a node after a given value -> implemented */
struct Node *insertAfterValue(struct Node *head, int key, int val);

/* Insert a node before a given value */
struct Node *insertBeforeValue(struct Node *head, int key, int val);

/* Insert a node at a given position (0-based index) */
struct Node *insertAtPosition(struct Node *head, int pos, int val);

/* ==============================
   Deletion Operations
   ============================== */

/* Delete the first node */
struct Node *deleteAtBeginning(struct Node *head);

/* Delete the last node */
struct Node *deleteAtEnd(struct Node *head);

/* Delete a node by value */
struct Node *deleteByValue(struct Node *head, int key);

/* Delete a node at a specific position (0-based index) */
struct Node *deleteAtPosition(struct Node *head, int pos);

/* ==============================
   Traversal
   ============================== */

/* Traverse the list from head to tail -> implemented */
void traverseForward(struct Node *head);

/* Traverse the list from tail to head */
void traverseBackward(struct Node *head);

/* ==============================
   Search & Utility
   ============================== */

/* Search for a node by value and return pointer to it */
struct Node *search(struct Node *head, int key);

/* Count the number of nodes in the list ->implemented */
int length(struct Node *head);

/* Free the entire list and set head to NULL */
void destroyList(struct Node **head);

#endif /* DLL_H */
