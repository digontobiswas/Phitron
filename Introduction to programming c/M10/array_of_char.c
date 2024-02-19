
/*for integer need to space becuase of without
 space it count as 10(ten) if i give space (1 0) then count as 1(one) and 0(zero)
 but in charracter if i give space then then it will be count as a charractor*/

/*Another things that is need to remember askii value of charractor*/
#include <stdio.h>
int main(){

  char ar[5];
  for (int i = 0; i < 5; i++)
  {
    scanf("%c", &ar[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    //printf("%c", ar[i]);
    //printf("%d", ar[i]);
  }
  
    
    return 0;
}