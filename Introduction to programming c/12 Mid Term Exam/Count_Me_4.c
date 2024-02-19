#include<stdio.h>
#include<string.h>
int main()
{char ar[10001];
    scanf("%s", ar);

    int count[26] = {0};
    for (int i = 0; i < strlen(ar); i++)
    {   
        int value = ar[i] - 'a';
        count[value]++;
        
    
    }
    for (int i = 0; i < 26; i++)
    {
       if (count[i] != 0)
       {
         printf("%c - %d\n", i+97, count[i]);
       }
       
    }
    
     return 0;
}