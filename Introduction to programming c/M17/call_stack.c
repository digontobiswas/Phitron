#include <stdio.h>
void world()
  {
    printf("world\t");

  }

  void hello()
  {
    printf("Hello\t");
    world();

  }

int main(){
    
    hello();  //hello function wait do hello function 
    //see inside world function then do world function
    //then end the hello function from waiting list end print end stact work this type of work
    printf("End\t");
    
    return 0;
}