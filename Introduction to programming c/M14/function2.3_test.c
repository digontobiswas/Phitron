//return type + parameter
#include <stdio.h>

int sum ()
{
    printf("Biswas koro inpu nicchi\n");
    return 100;
}

int main(){
      printf("Ami kintu call kortechi\n");
      int addition =sum();

      //just call kore variable e value rakhlam but print holo kno?
      printf("Dekhi call holo kina\n");
      printf("%d\n", addition);

    
    return 0;
}