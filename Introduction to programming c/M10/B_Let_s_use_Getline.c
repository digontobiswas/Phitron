#include <stdio.h>
#include <string.h>

//why not s why %c?
int main(){

    char S[100001];
    fgets(S,100001,stdin);
   

 for (int i = 0; S[i] != '\\'; i++)
 {
    printf("%c",S[i]);
 }
 
   
    return 0;
}