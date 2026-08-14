#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num % 5 == 0 && num % 11 == 0)
    {
        printf("number is divisible by both 5 and 11");
    }
    else if(num % 5 == 0)
    {
        printf("number is divisible by 5");
    }
    else if(num % 11 == 0)
    {
        printf("number is divisible by 11");
    }
    else
    {
        printf("number is not divisible by 5 nor 11");
    }
    return 0;
}