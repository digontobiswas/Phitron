/*sizeof(variable) if a function that define size of total memory
 if i divide by per array's index memory size then i will get the array size
 Note:Here array size is 5 frist i count the total array memory size by the function that is 20 then
 int array so per array is 4 byte. so i divided by 4 then got the size of array */

#include <stdio.h>
int main(){

  int ar[5];
 int size =sizeof(ar)/4;
 printf("%d", size);
  
    return 0;
}