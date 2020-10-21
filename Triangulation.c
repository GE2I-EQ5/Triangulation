#include <stdio.h>
#include <math.h>

int main()
{
  float tc=1, tb=1, cb=1; //Distances
  const int v_son = 340; //Vitesse du son dans l'air
  float yc = (pow(tb,2) + pow(tc,2) - pow(cb,2)) / (2*tb); //Yc
  float xc = sqrt(pow(tc,2)-pow(yc,2)); //Xc
  
  printf("XC : %f\n", xc);
  printf("YC : %f\n", yc);

  return 0;
}
