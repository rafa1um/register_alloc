#include <stdio.h>
#include <stdlib.h>
#include "modules/linked_list.h"

int main() { 
  /* Start with the empty list */
  struct Node* head = NULL; 
  
  // Insert 6.  So linked list becomes 6->NULL 
  append(&head, 6); 
  
  // Insert 7 at the beginning. So linked list becomes 7->6->NULL 
  push(&head, 7); 
  
  // Insert 1 at the beginning. So linked list becomes 1->7->6->NULL 
  push(&head, 1); 
  
  // Insert 4 at the end. So linked list becomes 1->7->6->4->NULL 
  append(&head, 4); 
  
  // Insert 8, after 7. So linked list becomes 1->7->8->6->4->NULL 
  insertAfter(head->next, 8); 
  
  printf("\n Created Linked list is: "); 
  printList(head); 
  
  return 0; 
} 