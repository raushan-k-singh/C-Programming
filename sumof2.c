#include<stdio.h>
int main(){
    int num1,num2,sum;
    printf("Enter Two Numbers");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("The Sum Of %d and %d is: %d\n", num1 , num2 , sum);
    return 0;
}