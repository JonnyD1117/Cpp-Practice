#include<stdio.h>





int nbYear(int p0, float percent, int aug, int p) {

  printf("Percentage %f", ceiling((percent/100.))*1527);

  int num_years = 0;
  // while(p0 < p)
  // {
  //
  //   p0 = p0*(percent/100.0) + aug;
  //   num_years++;
  //
  //   printf("new init pop: %d", p0);
  //
  // }

  return num_years;

}



int main(void){

int init_pop = 1000;
double pct = .2;
int augment = 50;

int final_pop = 2000;

int output;


output = nbYear(init_pop, pct, augment, final_pop   );



printf("Number of Years: %d", output);





  return 0;
}
