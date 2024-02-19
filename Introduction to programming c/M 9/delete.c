#include <stdio.h>
int main(){

  int n, i;
  scanf("%d", &n);
  int ar[n];
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&ar[i]);
  }
  int position;
  scanf("%d", &position);


//for delete make this logic

for ( i =position; i<n-1; i++)
{
    ar[i]= ar[i+1];
}
//print req array
  //for ( i = 0; i <n; i++)
  //for ignor last element just print 0(zero) to n-1 array value
    for ( i = 0; i <n-1; i++)
    {
        printf("%d ", ar[i]);
    }
    
    return 0;
}