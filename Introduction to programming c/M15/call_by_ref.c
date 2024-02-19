void fun(int *p)
{    
    printf("p er value-%d\n", *p);
    printf("p er value-%p\n", p);
    *p =100;

}
#include <stdio.h>
int main(){
   int x= 10;
    fun(&x);
  // printf("x er value-%p\n", &x);
  printf("x er value-%d",x);

  //note *p 100 hoye geche x er meorey te *p chole geche ar *p er memory x er memory er same so x er value now 100
  
    
    return 0;
}