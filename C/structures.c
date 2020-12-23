#include<stdio.h>
#include<stdlib.h>


struct student {

  char name[80];
  int age;
  float percentage;

};








int main(void){

  char zeros[80];

  struct student myStudent;

  myStudent.age = 50;
  myStudent.percentage = .75;





  printf("The Student Age is %d\n", myStudent.age );
  printf("The Student Percentage is %f\n", myStudent.percentage );











  return 0;
}
