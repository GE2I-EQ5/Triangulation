#include <stdio.h>
#include <math.h>

int main()
{
  float tc=1, tb=1, cb=1;
  float xc = sqrt(pow(tc,2));
  float yc = (pow(tb,2) + pow(tc,2) - pow(cb,2)) / (2*tb);
  printf("XC : %f\n", xc);
  printf("YC : %f\n", yc);

  return 0;
}

