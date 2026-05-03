#include <stdio.h>
 
int main (){

    int a;
    int b;
    int temp;

    printf("enter your two number for swaping:");
    scanf("%d",&a);
    printf("enter your second number for swaping:");        
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("after swapping: %d %d", a, b);
}
