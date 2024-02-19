#include <stdio.h>
int main(){
     double x =5.26;
     double*ptr =&x;
     printf("x er value %0.2lf\n", *ptr) ;  
     printf("x er value %0.2lf\n", *ptr) ;
     printf("ptr er size-%d and x er size-%d\n", sizeof(*ptr), sizeof(x)) ;
     printf("ptr er size-%d and x er size-%d\n", sizeof(*ptr), sizeof(x)) ;
     double *ptr2 = ptr; //memory addreess same hoye geche
     *ptr2 = 2.56;
     printf("%p %p\n", ptr, ptr2);
     printf("%d", *ptr);
    return 0;
}