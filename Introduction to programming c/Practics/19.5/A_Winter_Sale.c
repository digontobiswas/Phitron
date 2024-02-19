#include <stdio.h>

float fun(float discount, float pp) {
   float op = pp / (1 - (discount / 100));
   return op;
}

int main() {
  float discount, pp;
  scanf("%f %f", &discount, &pp);
  float price = fun(discount, pp);
  printf("%.2f", price);
  return 0;
}