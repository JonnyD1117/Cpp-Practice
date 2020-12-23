#include<stdio.h>



int main(){

int array[5] = {5,6,7,8,10};

int *arr_ptr = &array;



for(int i =0; i <sizeof(array)/sizeof(array[0]); ++i){

  // printf("The Array Value at Index %d is %d \n", i, array[i]);

  printf("Pointer Reference: %d, Pointer Dereferenced: %d \n",arr_ptr, *arr_ptr);

  arr_ptr+=1;


}






  return 0;
}
