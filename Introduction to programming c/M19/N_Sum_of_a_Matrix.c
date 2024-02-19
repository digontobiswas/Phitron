#include <stdio.h>
int main(){

  int row, col;
  scanf("%d %d", &row, &col);
  int ar_one[row][col], ar_two[row][col], ar_f[row][col];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
        scanf("%d", &ar_one[i][j]);
       
        
    }
    
  }

for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
        
        scanf("%d", &ar_two[i][j]);
        
    }
    
  }


  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
       ar_f[i][j]= ar_one[i][j]+ar_two[i][j];
        
    }
    
  }
  
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ", ar_f[i][j]);
        
    }
    printf("\n");
  }
  

  
    return 0;
}