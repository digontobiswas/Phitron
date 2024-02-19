#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    int n;
    int a[10001];
    int x;
 for (int i = 0; i < t; i++)
 {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }
    scanf("%d", &x);
    int value = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            value = 1;
            break;
        }
        
    }
    if (value == 1)
    {
       printf("YES\n");
    }
    else
      printf("NO\n");
 
    
 }
 

    return 0;
}