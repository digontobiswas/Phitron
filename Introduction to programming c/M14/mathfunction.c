#include <stdio.h>
#include <math.h>
#include <stdlib.h> //only for abs function
int main(){
    //ceilling value input try with 3.1 4.1 4.001, floor 3.999, round 3.4 and 3.5.....sqrt 4 16 etc
        
         double x, y; //y value need only for power pow function
         scanf("%lf %lf", &x, &y); //y value only for pow function
         //int ans = ceil(x);
        //int ans =floor(x);
        //int ans = round(x); //nearest value 0.5 holei next
        //int ans = sqrt(x);
        //int ans =  pow(x, y);
        int ans = abs(x); //input (-)ve and this function make (+)value
         printf("%d",ans);
       
    
    return 0;
}

