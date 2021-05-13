#include<stdio.h>
#include<string.h>
#include<stdlib.h> 


int stack[256];
int count =0; 

void push (int x) {

    if(count ==256){
        fprintf(stderr, "No Space in Stack \n");
    }

stack[count] = x; 
count++; 
}

int pop(void){
    if(count ==0){
        fprintf(stderr, "Nothing to take from Stack \n");
        return -1;
    }

int value = stack[--count]; 

return value ; 

}


int main(void){


    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    for(int i=0; i < 5; i++){
        // printf("The Stack element [%d] is %d \n", i, stack[i]);
        printf("%d \n", pop());
    }




    return 0; 
}