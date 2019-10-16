#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// A linked list node 
struct Node { 
  int data; 
  struct Node *next; 
}; 

void push(struct Node** head_ref, int new_data);
void insertAfter(struct Node* prev_node, int new_data);
void append(struct Node** head_ref, int new_data);
void printList(struct Node* node);

#endif