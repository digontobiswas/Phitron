#include <stdio.h>

int count_before_one(int *x,int size)
{ 
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(x+i)==1)
        {

            break;
        }
        count++;
    }


   return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int ar_size = sizeof(ar)/ sizeof(int);

  int result =count_before_one(ar, ar_size);
   printf("%d\n", result);
   
}