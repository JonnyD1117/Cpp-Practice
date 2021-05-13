#include<stdio.h> 
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

bool comp(const int *a, const int *b, size_t n){

    bool state[8]; 

    // Iterate Over Arrays
    for(int i =0; i<n; i++){   

        // Iterate Over Multples
        for(int j=1; j<=9;j++){

            // Compare if B is a Multiple of A at the Current position. 
            if(pow(a[i],j) == b[i]){
                state[i] = true;
                break;
            }

            else{

                state[i] = false;
            }


        }

        // printf("This is the thing A:[%d], B:[%d]\n", a[i], b[i]);
        printf("The state is [%d]\n", state[i]);

    }





    return true;
}



int main(void){

int a_good[8] = {121, 144, 19, 161, 19, 144, 19, 11} ;
int b_good[8] = {121, 14641, 20736, 361, 25921, 361, 20736, 361};

int a_bad[8] = {121, 144, 19, 161, 19, 144, 19, 11}  ;
int b_bad[8] = {132, 14641, 20736, 361, 25921, 361, 20736, 361};

bool thing = comp(a_good, b_good, 8); 


    return 0; 
}