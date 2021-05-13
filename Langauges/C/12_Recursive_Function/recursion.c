#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int f(int x){

    if(x <0){

        return 0;
    }

    printf("Hello from F with x = %d \n", x);
    return f(x -1);

    
}





int main(void){

    int result = f(20);

    printf("The Result from calling f is %d \n", result);

    return 0; 
}