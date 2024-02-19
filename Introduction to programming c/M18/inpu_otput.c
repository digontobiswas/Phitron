#include <stdio.h>
int main(){
//in this code for input just change print i to input i and print j to input j
//input in the next code input_output1.c
  int a [5][3];
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 3; j++)
    {
       //  printf("%d %d\n", i, j);
       //same print like matrix and 2D array input
       printf("a[%d][%d]  ", i, j);
    }
    //for showing like matrix need to new line after a row work end
    printf("\n");
    // printf("%d\n", i);
  }

  

    return 0;
}