#include <stdio.h>
#include <string.h>
int main(){

  //functiom name is strlength. need to call string.h header
 //syntax is strlen(varname)
char ar[100];
 scanf("%s", &ar);
 int length = strlen(ar);
 printf("%d",length);

    return 0;
}