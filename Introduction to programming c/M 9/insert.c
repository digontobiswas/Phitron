#include <stdio.h>
int main(){

    int i, n;
    scanf("%d", &n);
    int ar[n+1]; //for insert need space more than index;
    //declere array eleemnt
    for(i = 0; i < n; i++)
    {
      scanf("%d", &ar[i]);
    }
//insert position and value
    int position, value;
    scanf("%d %d", &position, &value);

    //for insert need to make space so that change position.
    for ( i = n; i>= position; i--)
    {
        ar[i]= ar[i-1];
    }
    
    ar[position] = value;// change value to the array
    
    for ( i = 0; i <=n; i++)
    {
        printf("%d ", ar[i]);
    }
    
    return 0;
}