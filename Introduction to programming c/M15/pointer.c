#include <stdio.h>
int main(){

  int x =100;
  int *ptr = &x;
  printf("X er address-%p\n",&x);  //adress print er joinno %p
  printf("X er address by ptr-%p\n",ptr);  //x er address pointer k diyechi so ptr %p diye print korle x er address chole asbe
  printf("X= *ptr, so x and *ptr er value-: x-%d *ptr-%d\n",x,*ptr);  // *prt mane x so %d diye * ptr print kotle x er value paro (dereferance)
  printf("ptr o ekta alada variable ekhn so ptr er memori address %p\n",&ptr);
  printf("*ptr=x, so x er address and * ptr er adress-:*ptr-%p x-%p\n",&*ptr, &x);
  
  //dereference x by ptr2 to ptr thrn 
  int *ptr2 = ptr;
  *ptr2 =200;
  printf("Now ptr value is  %d",*ptr);

    return 0;
}

//Note: * ptr(value) manei x(value), shudhu ptr manei adress