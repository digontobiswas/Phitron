#include <stdio.h>
int main(){
/*
2 5 4
1 2 3
4 5 6
7 8 9
10 11 12

input formate copy and see
*/
  int a[5][3];
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 3; j++)
    {
        scanf("%d", &a[i][j]);
    }
    
  }
//for output
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 3; j++)
    {
        printf("%d  ", a[i][j]);
    }
    printf("\n"); //just for make beautiful
  }
    
    return 0;
}