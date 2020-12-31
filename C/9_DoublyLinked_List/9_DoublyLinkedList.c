
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


node_t* create_node(node_t* prev_node, node_t* next_node, int node_val){

node_t* new_node = (node_t*)malloc(sizeof(node_t*));

new_node->prev = prev_node;
new_node->val = node_val;
new_node->next = next_node;

return new_node;
}


void add_at_end(int value, node_t* head){


node_t* current = head;
node_t* previous = NULL;


while(current->next != NULL){

  previous = current;
  current = current->next;
}


node_t* end_node = create_node(current, NULL, value);


}



node_t* head;

int main(void){

  head = create_node(NULL, NULL, 1);

  head->prev = NULL;

  node_t* node1 = create_node(head, NULL,2);

  head->next = node1;

  printf("Head: n=[%d], p=[%d], val=[%d]\n", head->next, head->prev, head->val);
  printf("Node1: n=[%d], p=[%d], val=[%d]\n", node1->next, node1->prev, node1->val);



  return 0;
}
