#include <stdio.h>
int main(){

  char ar[100];
  scanf("%s", &ar);

  int count =0;
  
/*
  for (int i = 0; ar[i] !='\0'; i++)
  {
    count++;
  }
*/

  //same things by while loop

/*
int i=0;
  while (ar[i]!='\0')
  {
    count ++;
    i++;
  }
  
*/
  printf("%d", count);
  

    return 0;
}   