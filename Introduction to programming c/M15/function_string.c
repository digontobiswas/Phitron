#include <stdio.h>
#include <string.h>

void fun (char *ar)
{
 int length = strlen(ar);
 printf("length pass korte hoy na arry er moto array pass korle string e length automatic chole ase kintu size ase na size pass korte hoy so length= %d", length);
   
}
int main(){

//   char ar[6]= "Hello";
  char ar[5]= "Hello";
  int size = sizeof(ar)/sizeof(char); //jehetu char 1 byte divide korle o chelo ar na korleo ek i value
  int length = strlen(ar);
  fun(ar);

    return 0;
}