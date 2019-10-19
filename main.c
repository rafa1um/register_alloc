#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "modules/linked_list.h"

int main(int argc, char *argv[]) { 
 
    //char c;
    char *token;
    FILE *input_file = fopen(argv[1], "r");
    char buffer[1024];
    /* Start with the empty list */
    struct Node* head = NULL; 
    int graph_num;
    int k_num;
    int node;
    int adj_node;
    

    if (input_file == NULL) { 
        printf("Arquivo não pode ser aberto! \n"); 
        exit(0); 
    } 

    // Read contents from file 
    //c = fgetc(input_file); 

    //while (c != EOF) { 
      //printf ("%c", c); 
      //c = fgetc(input_file); 
    //} 

    while (fgets(buffer, 1024, input_file) != NULL) { 
        token = strtok(buffer, " =");
        while(token != NULL){
          if(strcmp(token, "Grafo") == 0) {
            token = strtok(NULL, ":");
            graph_num = atoi(token);
            printf("%d\n", graph_num);
            token = strtok(NULL, " ");
          }
          else if(strcmp(token, "K") == 0) {
            token = strtok(NULL, " ");
            k_num = atoi(token);
            printf("%d\n", k_num);
          } 
          else if(strcmp(token, "-->") == 0) {
            token = strtok(NULL, " ");
            while(token) {
              printf("%s\n", token);
              token = strtok(NULL, " ");
            }
          }
          else {
            node = atoi(token);
            append(&head, node);
            printf("%d\n", node);
          }
          token = strtok(NULL, " =");
        }
    } 
    printList(head);  
    fclose(input_file); 
 
  // printf("\n Created Linked list is: "); 
  // printList(head); 

} 