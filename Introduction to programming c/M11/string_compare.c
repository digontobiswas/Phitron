#include <stdio.h>
int main(){

  char a[100], b[100];
  scanf("%s %s", a, b);

  int i= 0;
while (1)
{
    //case 3
    if (a[i]=='\0' && b[i]=='\0')
    {
        printf("Same\n");
         break;
    }
    //case 1
    else if(a[i]== '\0')
    {
       printf("A choto\n");
       break;
    }
    //case 2
    else if (b[i]=='\0')
    {
        printf("B choto\n");
        break;
    }
    


    if (a[i]==b[i])
    {  
        i++;
    }

    else if (a[i]<b[i])
    {
        printf("A choto\n");
        break;
    }

    else if (a[i]>b[i])
    {
        printf("B choto\n");
    }
    
    
    
   
}


    return 0;
}