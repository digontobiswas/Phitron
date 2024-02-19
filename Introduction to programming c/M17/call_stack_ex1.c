//always 1st will be start main function then step by step
#include <stdio.h>
void world()
  {
    printf("world srart\n");
    printf("world\n");
    printf("world end\n");

  }

  void hello()
  {
    printf("Hello srart\n");
    world(); //go to the world funtion without end world function it will be wait here
    printf("Hello end\n");

  }

int main(){
    printf("Main srart\n");
    hello();  //go to the hello funtion without end hello function it will be wait here
    printf("Main End\n");
    
    return 0;
}