#include <stdio.h>
int main(){
/*
char ar[5]= "RAKIB";
Note: It will give wrong output need null for right output
*/
  /*
  char ar[]= "RAKIB\0"; //here give null for show that is end of this string last char. Another this if i want i can give array size if i don't want i can ignore it.
    printf("%s", ar);
    */

   //into double quation put string valu. it autometic put null at the end so string/array size is automatic size+1. if i give the value right then it print as right.

  
  char ar[6]= "RAKIB";
   printf("%s", ar);

   // no gaurenty to automatic null if i put value like this
   //char[6]= {'R','A','K','I','B'};
    return 0;
}