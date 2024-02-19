#include <stdio.h>
#include <string.h>
int main(){

  char a[100], b[100];
  scanf("%s %s", a, b);
    int v= strcmp(a, b);
    if (v<0)
    {
      printf("A choto and b boro");
    
    }
    else if (v>0)
    {
      printf("B choto and A boro");
    }
    else
    {
      printf("Both are same");
    }
    
    


  
return 0;
}
