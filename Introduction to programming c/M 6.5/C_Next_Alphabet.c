#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    
    char result = ch +1;
    if (ch== 'z')
    {
        printf("a");
    }
    else{
        printf("%c",result);
    }
    
    return 0;
}