#include <stdio.h>
#include <string.h> //for gets and fgets need this header file
int main(){

//   char ar[18];
//   gets(ar);
//   printf("%s", ar);
  //It's works

  //if i decrease the array size but input size is not decrease then also print right. see now.
  char ar[10];
  gets(ar);
  puts(ar);

//print right. It's compailer problem. If i give more than size then no problem but less than the input with null then run time error or segmentation fault.
    return 0;
}