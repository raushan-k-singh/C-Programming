#include<stdio.h>
int main(){
    int a=6,b=2,temp;
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping:a=%d,b=%d",a,b);
    return 0;
}