#include<stdio.h>
int main(){
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age>18)
    {
        printf("Eligible for voting");
    }
    else if(age<18 && age>0)
    {
        printf("Not elegible for voting");
    }
    else
    {
        printf("Invalid input,Try again");
    }
    return 0;
}