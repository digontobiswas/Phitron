#include <stdio.h>
int main(){

  int n, i;
  scanf("%d", &n);
  int a, even =0, odd=0, positive =0, negetive=0;
  for ( i = 1; i <=n; i++)
  {
    scanf("%d", &a);

if (a%2==0)
{
   even ++;
}
else
{
 odd ++;
}

if ((a>0))
{
    positive ++;
}
else if(a<0)
{
negetive ++;
}


  }//for end
  printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negetive );
    
    return 0;
}