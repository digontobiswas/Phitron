#include <stdio.h>
int main(){
/*
char ar[5]= "RAKIB";
Note: It will give wrong output need null for right output
*/
  
  char ar[]= "RAKIB\0"; //here give null for show that is end of this string last char. Another this if i want i can give array size if i don't want i can ignore it.
    printf("%s", ar);
  

  
    return 0;
}