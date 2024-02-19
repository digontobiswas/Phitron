#include <stdio.h>
#include <string.h>
int main(){
    int n;
scanf("%d", &n);
char ar[n+1];
int sum= 0;
//fgets(ar,6, stdin);
scanf("%s", ar);
for (int i = 0; i < strlen(ar); i++)
 {  
   sum +=(ar[i]-48);
}

printf("%d", sum);

    
    return 0;
}