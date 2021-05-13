#include <stdio.h>
#include<stdlib.h>
#include <string.h> 

char *alphabet_position(char *text) {
  
      int str_len = strlen(text);
    char cur_letter; 
    char alpha[26] = {'a','b','c','d', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o' ,'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};


    char* digit_string = malloc(str_len*sizeof(char));

    // Iterate Through String and Match Again (alpha)
    for( int i =0; i<str_len; i++){

        cur_letter = text[i];


        // Iterate Over Alphabet to find correct Match
        for(int j=0; j<sizeof(alpha); j++){
            
            // If the current letter of the string matches the Upper or Lower Case value,
            // store the CHAR representation of the correct digit
            if(cur_letter == alpha[j] || cur_letter == (alpha[j] - 32) ){

                digit_string[i] = (char)(j + 1);

                // printf("Char Letter [%d]: Current Letter [%c]  \n ",(char)(j + 1), cur_letter);

                break; 
            }

            else {

                // Set Non Matches as Minus One for removal later.
                digit_string[i] = 'r';
            }
        } 

    }

    // Iterate Through (digit_string) and Count and Label Non-Matched Characters
    int non_alpha_sym_count = 0;    
    for( int l =0; l<str_len; l++){

        if(digit_string[l] == 'r'){

            non_alpha_sym_count++;
        }

    }

    // Remove Non-Matched Chars from the 
    char* matched_string = malloc((str_len - non_alpha_sym_count)*sizeof(char));
    int exclude_char_count = 0; 

    for(int k = 0; k < str_len; k++){

        if( (int)digit_string[k] != 'r'){

            matched_string[exclude_char_count] = digit_string[k];

            // printf("Char as Char: [%d] \n", matched_string[exclude_char_count]);
            
            exclude_char_count++;
        }
    }

    matched_string[exclude_char_count] = '\0';


    free(digit_string);
    free(matched_string); 
  
  
  return matched_string;
}


int main(void){

    char* input_string = "The sunset sets at twelve o' clock.";

    char* input2_string ;


    char* output_string = alphabet_position(input2_string);

    int out_str_len = strlen(output_string);

    for(int i =0; i < out_str_len; i++){

        printf("Output String: %d \n ", output_string[i]);
    }


    return 0;
}