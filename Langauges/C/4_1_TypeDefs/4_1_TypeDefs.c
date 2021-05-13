#include<stdio.h>


typedef struct
{

char name[80];
int age;
float pct;

}student;


int main(void){


student Joan;

Joan.age = 25;
Joan.pct = .555;

printf("Student Age is %d\n", Joan.age);
printf("Student Percentage is %f\n", Joan.pct);


  return 0;
}
