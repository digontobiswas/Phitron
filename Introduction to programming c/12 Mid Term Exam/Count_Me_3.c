#include <stdio.h>
#include <string.h>
int main(){
int t;
  scanf("%d", &t);
  char ar[10001];
  
  for (int i = 0; i < t; i++)
  {
    scanf("%s" ,ar);
    int counts =0, countn= 0, countb =0;
  for (int i = 0; i < strlen(ar); i++)
  
  {
    
    if ('a'<=ar[i] && 'z'>=ar[i])
        {
            counts++;
        }

        
        else if ('A'<=ar[i] && 'Z'>=ar[i])
        {
            countb++;
        }
        else {
        countn++;
    }

  
    }
    printf("%d %d %d\n", countb, counts, countn);
  }
  
  
  
    return 0;
}