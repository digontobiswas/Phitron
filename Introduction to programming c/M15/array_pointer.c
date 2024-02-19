#include <stdio.h>
int main(){

  int ar[5]= {10,20, 30, 40, 50};
    printf("Oth index er address-%p\n", &ar[0]);  
    printf("Oth index er address-%p\n", ar);  
    printf("Oth index er value %d\n", ar[0]);
    printf("Oth index er value %d\n", *ar);
    printf("1th index er address %p\n", (ar+1));
    printf("1th index er address %p\n", &ar[1]); //without memory location can't give the address value

    return 0;
} 