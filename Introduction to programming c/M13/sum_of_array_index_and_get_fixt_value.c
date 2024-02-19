//chnage index value and check yes or no. if yeas then print the index number and the index value with sum result
#include <stdio.h>
int main(){

  int n, x;
  scanf("%d",&n);
  int ar[n];
  int flag = 0;
  
  for (int i = 0; i <n; i++)
  {
    scanf("%d", &ar[i]);
  }
  scanf("%d", &x);

  for (int i = 0; i < n-1; i++)
  {
    for (int j = i+1; j <n; j++)
    {
        if (ar[i]+ar[j]==x)
        {
            printf("%d %d\n", i, j);
            printf("%d+%d=%d",ar[i], ar[j], x);
            printf("\n");
            flag =1;
        }
        
    }
    
  }
  if (flag == 0)
  {
    printf("No");
  }
  else{
    printf("YEs");
  }
  
  

    return 0;
}
