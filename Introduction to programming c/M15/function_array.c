#include <stdio.h>
void fun (int ar[5], int n) //jehetu 1st index pass korce tai access er joinno size of dite hobe
// void fun (int *ar, int n)// n  to x, hoye geche karon parameter e n er jaygay x reacive kore //pure array ei vabe define kore
{
    printf("size of ar in function-%d\n", sizeof (ar)/sizeof(int));
    //ekhn e size 1 karon ar er 1st address ta pass korce only function
    //total array print
    for (int i = 0; i <n; i++)
    {   
        printf("total array ar[%d]= %d\n",i, ar[i]);
    }
    
}
    



int main(){
         int ar[5] ={10, 20, 30, 50, 50};
        // printf("size of ar inside main function-%d\n", sizeof(ar)/sizeof(int));
         int n = sizeof(ar)/sizeof(int);
         fun(ar, n);
    
    return 0;
}