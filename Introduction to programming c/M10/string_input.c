#include <stdio.h>
int main(){


char a[5];
scanf("%s", &a); //here no need assing to &. Beacuse of for string no need memory location. When we lern pointer then we know about more about it.
printf("%s",a);
//here i did not input null. but it's print as right. I know without null it can't print right. Where is the problem?


 //by giving array size 10. I can check array size


// char a[10];
// scanf("%s", &a);
// int size = sizeof(a)/sizeof(char);
// printf("%d",size);
//here give size is 10. But i need the length.If i give input this way then automatic null inputed.
    return 0;
}   

//another things that if i give input more than array of 5 index then it printed as right bcz of my windows compailer problem. If i try it with linux/online then it will be say segmentation fault or runtime error.
//Note i need to give right arraY size that is number of array+1(for null)