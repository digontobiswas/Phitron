void fun(int *ar, int n)
{  //printf("fun function");
//     for (int i = 0; i < 5; i++)
//   {
//     printf(" %d ", ar[i]);
//   }
//   printf("\n");
//main fun e print er age fun call kora so age fun function print hobe ei joinno new line
ar[0]= 500;
//dereferance pointer e * chara address so address e put kora hocche * thakle to value hoiye jay oi address er
// main function e o 500 hoye gecghe karon amra *ar diye 0 index e address and main function er ar[0] er address same kore dichi
}
#include <stdio.h>
int main(){

  int ar[5]= {10, 20, 30, 40, 50};
  fun (ar, 5 );
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", ar[i]);
  }
    
    return 0;
}