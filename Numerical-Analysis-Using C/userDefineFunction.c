//program to add two numbers using user define function
#include<stdio.h>
int main(){

    int num1,num2;
    printf("Enter the fast number:");
    scanf("%d", &num1);
     printf("Enter the second number:");
    scanf("%d", &num2);

    //call function sum with two parameters
    //sum is user define function
    int res = sum(num1,num2);
    printf("Addition of two number is:%d\n",res);
}

    int sum(int a,int b){
    int c;
    c = a+b;
    return c;

    }
