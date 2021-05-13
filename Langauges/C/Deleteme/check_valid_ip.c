#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include<stdbool.h>

/* Return 1 is addr is a valid IP address, return 0 otherwise */
// int is_valid_ip(const char * addr) {
int is_valid_ip(char * addr) {

bool valid_flag = false; 

char * token = strtok(addr, " ");



while(token != NULL){

printf("%s \n", token);

token = strtok(NULL, " ");



}

    if (valid_flag == true){

        return true;
    }

    else {

        return false; 
    }
};


int main(void){

    bool output; 

    char test_string[] = "This is a Test stringy thing";

    output = is_valid_ip(test_string);



    return 0; 
}