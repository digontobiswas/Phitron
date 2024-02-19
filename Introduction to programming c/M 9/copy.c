#include <stdio.h>
int main(){

  int none, ntwo, f;
  scanf("%d %d", &none, &ntwo);
  int arone[none], artwo[ntwo];

  for (int i = 0; i < none; i++)
  {
    scanf("%d", &arone[i]);
  }

  for (int i = 0; i < ntwo; i++)
  {
    scanf("%d", &artwo[i]);
  }




  f= none+ntwo;
  int ar[f];

  for (int i = 0; i < none; i++)
  {
    ar[i]= arone[i];
  }

// for ( int k = 0; k < f; k++)
// {
//     printf("%d", ar[k]);
// }

  
  int i= none;
  for (int j = 0; j<ntwo; j++)
  {
    
 ar[i]= artwo[j];
 i++;
  }

  for (int k = 0; k < f; k++)
  {
    printf("%d ",ar[k]);
  }
  
  
  

    return 0;
}