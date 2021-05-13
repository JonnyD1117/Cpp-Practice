#include<stdio.h>
#include<stdlib.h>





int main(void){


FILE *file_to_read = fopen("filetoberead.txt", "r");
FILE *file_to_write = fopen("newtext.txt", "w");


if (file_to_read == NULL || file_to_write == NULL){

  printf("one file wouldn't open\n");
}


printf("%c",file_to_read[2]);
// char c;
//
// while((c=fgetc(file_to_read)) != EOF){
//
//   if (c == '.'){
//
//     c = '!';
//   }
//
//   fputc(c, file_to_write);
// }

fclose(file_to_read);
fclose(file_to_write);

  return 0;
}
