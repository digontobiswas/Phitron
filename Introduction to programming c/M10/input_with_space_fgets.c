#include <stdio.h>
int main(){

/*
syntax
fgets(ar, size_with null, stdin)
*/
//     char ar[18];
//   fgets(ar, 18,stdin);
//   printf("%s", ar);
  //it works but inside the fgets syntax that size i provide those size will be count as input. see try will 10
  
//   char ar[18];
//   fgets(ar, 10, stdin);
//   printf("%s", ar);


//See now output is Rahat Kha. If i give array size less and fgets sizwe more then run time error. But array size more and fgets size is less then no problem.


//need to look another section that is fgets input the enter also. lets see.

  // char ar[19];
  // fgets(ar, 19, stdin);
  // printf("%s", ar);
//gets ar/scanf ar do not input a enter

//where i put null there stop printing
//let's see

char ar[19];
  fgets(ar, 19, stdin);
  ar[10]='\0'; //null put at 10. Output is also end at 10
  printf("%s", ar);
  
    return 0;
}