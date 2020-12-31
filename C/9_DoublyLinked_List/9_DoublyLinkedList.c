
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



typedef struct node {

  int val;
  struct node * next;
  struct node * prev;

}node_t;



void print_list(node_t* list_head){

node_t* current = list_head;

int count = 0; 

bool done = false;
 

    while(done != true){

        printf("Node_num:%d : node_ptr=[%p], prev=[%p], next=[%p], val=[%d]\n", count, current, current->prev,  current->next,  current ->val);
        
        if(current->next == NULL){

            done = false;
        }

        current = current->next;
        count++;
    }
}


node_t* create_node(node_t* prev_node, node_t* next_node, int node_val){

node_t* new_node = (node_t*)malloc(sizeof(node_t*));

new_node->prev = prev_node;
new_node->val = node_val;
new_node->next = next_node;

return new_node;
}

node_t* add_at_start(int new_head_val, node_t* current_head){

    node_t* new_head = create_node(NULL, current_head, new_head_val);

    return new_head;

}

void add_at_end(node_t* head_node, int value){

    node_t* current = head_node;

    while(current->next != NULL){
    current = current->next;
    }

    node_t* end_node = create_node(current, NULL, value);

}

void free_all(node_t* cur_head){

node_t* current = cur_head; 

bool done = false; 

while(done != true){

    free(current); 

    current = current->next;

    if(current->next == NULL){

        done = true;
    }

}

}

node_t* head;

int main(void){

  head = create_node(NULL, NULL, 1);
  node_t* node1 = create_node(head, NULL,2);
  node_t* node2 = create_node(node1, NULL, 3); 

  head->prev = NULL;
  head->next = node1;

  node1->prev = head;


  node1->next = node2;

  node2->prev = node1;
  node2->next = NULL;

  head = add_at_start(0, head);

  add_at_end(head, 4);


  print_list(head);

  free_all(head);
 
//   printf("Head : node_ptr=[%p], prev=[%p], next=[%p], val=[%d]\n", head, head->prev,  head->next,   head ->val);
//   printf("Node1: node_ptr=[%p], prev=[%p], next=[%p], val=[%d]\n", node1, node1->prev, node1->next,  node1->val);
//   printf("Node2: node_ptr=[%p], prev=[%p], next=[%p], val=[%d]\n", node2, node2->prev, node2->next,  node2->val);

  return 0;
}
