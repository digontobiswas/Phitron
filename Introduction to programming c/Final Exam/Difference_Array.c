#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{

    int t;
    scanf("%d", &t);
    int n;
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);

        int ar[n];
        for (int k = 0; k < n; k++)
        {
            scanf("%d", &ar[k]);
        }
        
        int b[n];
        for (int j = 0; j < n; j++)
        {
            b[j] = ar[j];
        }
        
        for (int i = 0; i < n - 1; i++)
        {


            for (int j = i + 1; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    int temp = b[i];

                    b[i] = b[j];

                    b[j] = temp;
                }
            }
        }
       
         int arc[n];
         for (int k = 0; k < n; k++)
         {
           int ab = abs(ar[k] - b[k]);
            arc[k] = ab;
         }
         
         for (int i = 0; i < n; i++)
         {
            printf("%d ", arc[i]);
         }
         printf("\n");
         
         
    }

    return 0;
}