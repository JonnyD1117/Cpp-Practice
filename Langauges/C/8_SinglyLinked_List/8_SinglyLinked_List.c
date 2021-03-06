#include<stdio.h>
#include<stdlib.h>



// Typedef Struct defining each NODE in the Linked List
typedef struct node {

int val;    // Value in the Node
struct node * next;   // Pointer to the NEXT node in the list

}node_t;


// Iterate Through Linked List and Print each element
void print_list(node_t * head){

node_t* current = head;   // Define local copy of Head PTR

  while(current != NULL){ // Iterate through until NEXT is NULL

    printf("%d\n", current->val);
    current = current->next;
  }
}

// Add new Node to the head of the Linked List
node_t* add_to_start(int new_head_value , node_t* cur_head_node){

// Allocate node memory
  node_t* new_head_node = malloc(sizeof(node_t*));

  new_head_node->next =  cur_head_node;
  new_head_node->val = new_head_value;

  return new_head_node;
}

// Add a new Node at the end of the Linked List
void add_to_end(int end_node_val, node_t* cur_head){

node_t* end_node = malloc(sizeof(node_t*));
end_node -> val = end_node_val;
end_node -> next = NULL;

  node_t* prev = NULL;
  node_t* cur = cur_head;

    while(cur->next != NULL){

      prev = cur;
      cur = cur->next;
    }

    cur->next = end_node;
}

// Remove Node from the Start of Linked List
node_t* remove_from_start(node_t* cur_head){

  // node_t* new_head = malloc(sizeof(node_t));
  //
  // new_head->next = cur_head->next->next;

  cur_head = cur_head->next;


  return cur_head;
}

// Rmeove NOde from the End of Linked List
void remove_from_end(node_t* cur_head){

node_t* prev = NULL;
node_t* cur = cur_head;

  while(cur->next != NULL){

      prev = cur;
      cur = cur->next;
    }

    cur = prev;
    cur->next = NULL;

}

// Add a Node at a specified position Linked List
void add_at_pos(int pos, int value_at_pos, node_t* cur_head){


node_t* new_node = malloc(sizeof(node_t*));

new_node->val = value_at_pos;
new_node->next = NULL;


int ind = 0;
node_t* prev = NULL;
node_t* cur = cur_head;

while(cur->next != NULL && ind !=pos){

  prev = cur;
  cur = cur->next;
  ind++;
}

prev->next = new_node;
new_node->next = cur;

}

// Remove a Node from a specified Position in Linked List
void remove_from_pos(int pos, node_t* cur_head){

int ind = 0;
node_t* prev = NULL;
node_t* cur = cur_head;

while(cur->next != NULL && ind != pos){

  prev = cur;
  cur = cur->next;
  ind++;
}

prev->next = cur->next;

}















int main(void){

node_t * head = NULL;
head = (node_t*) malloc(sizeof(node_t));

// Check if Head is NULL
if(head == NULL){ return 1; }

head-> val = 1;
head-> next = (node_t*) malloc(sizeof(node_t));

head->next->val = 2;
head->next->next = NULL;

printf("###########  Initial Linked List  ################\n");
print_list(head);


printf("###########  Add 5 to Start of List  ################\n");
head = add_to_start(5, head);
print_list(head);


printf("###########  Remove First Node from Prev. List  ################\n");
head = remove_from_start(head);
print_list(head);


printf("###########  Add 8 to End Node  ################\n");
add_to_end(8, head);
print_list(head);

printf("###########  Remove Last Node From List  ################\n");
remove_from_end(head);
print_list(head);

printf("###########  Insert 3 at Position 2 of List  ################\n");
add_at_pos(2, 3, head);
print_list(head);

printf("###########  Remove 3 at Position 1 of List  ################\n");
remove_from_pos(1, head);
print_list(head);


  return 0;
}
