#include<stdio.h>
int main()
{
    
    int t;
    scanf("%d", &t);
    int M1, M2, D; 

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &M1, &M2, &D);
        int days = (M1*D) / (M1+M2);
        printf("%d\n", D-days);
    }
    
    return 0;
}