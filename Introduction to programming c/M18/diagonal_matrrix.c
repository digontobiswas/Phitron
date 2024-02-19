#include <stdio.h>
int main(){

    int row, col;
  scanf("%d %d", &row, &col);
  int ar[row][col];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
        scanf("%d", &ar[i][j]);
    }
    
  }


   int flag = 1;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (i ==j)
      {
        continue;
      }
      else{
       if (ar[i][j]=0)
        {
        flag=0;
        }
      }
     
      
      
    }
    
    
    
  }

  if (flag ==0)
    {
        printf("diagonal");
    }
    else{
         printf("not diagonal");
    }
    return 0;
}