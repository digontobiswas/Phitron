#include<stdio.h>
#include<string.h>
int main()
{
    
    int t;
    scanf("%d", &t);
    int n;
    for (int i = 0; i < t; i++)
    {
        scanf("%d ", &n);
        char s[n];
        scanf("%s", s);
        int tiger = 0,pathan = 0;
        
        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j] == 'T')
            {
                tiger ++;
            }
            else
                pathan ++;
        }
        
        if (tiger > pathan)
        {
            printf("Tiger");
        }
        else if (tiger<pathan)
        {
            printf("Pathaan");
        }
        else
           printf("Draw");
        
        printf("\n");
       
        
    }
     
    return 0;
}