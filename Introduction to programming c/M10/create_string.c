#include <stdio.h>
#include <string.h>
int main(){

char S[1000], T[1000];
scanf("%s%s", &S,&T);
int Lenght_of_S = strlen(S);
int Length_of_T = strlen(T);
printf("%d %d\n",Lenght_of_S, Length_of_T);
printf("%s %s", S, T);

    return 0;
}