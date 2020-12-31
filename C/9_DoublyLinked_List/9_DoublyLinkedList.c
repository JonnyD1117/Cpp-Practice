#include<stdio.h>
#include<stdlib.h>



typedef struct node {

  int val;
  struct node * next;
  struct node * prev;

}node_t;



void print_list(node_t* list_head){

node_t* current = list_head;

    while(current->next != NULL){

        printf("%d\n", current->val);
        current = current->next;

    }
}

int main(void){

    node_t* head = (node_t*)malloc(sizeof(node_t*));
    node_t* node1 = (node_t*)malloc(sizeof(node_t*));
    node_t* node2 = (node_t*)malloc(sizeof(node_t*));

    if( head ==NULL || node1 ==NULL || node2 == NULL){

        printf("Nodes not initialized: One of the Nodes is NULL");
        return 1;
    }

    // printf("Place 1\n");

    head->prev = NULL;
    head->next = node1;
    head->val = 1;
    // printf("Place 2\n");

    node1->prev = head;
    node1->next = node2;
    node1->val = 2;
    // printf("Place 3\n");


    node2->next = NULL;
    node2->val = 3;
    node2->prev = node1;
    // printf("Place 4\n");

    printf("%d\n", head->val );
    printf("%d\n", node1->val);
    printf("%d\n", node2->val);

// printf("Place 5\n");


    free(head);
    free(node1);
    free(node2);


    // printf("Place 6\n");


  return 0;
}
