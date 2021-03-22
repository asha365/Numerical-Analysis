//Problem 01: Write a c program to reverse a given number using user defined function.
//Input: 12345
//Output: 54321

#include<stdio.h>
int reverseNumber(int num){
    int sum = 0;
    while (num != 0){
        sum = sum*10 + num%10;
        num /= 10;
    }
    return sum;
}

int main(){
   int number, reverse;
   printf("Input:");
   scanf("%d",&number);


reverse = reverseNumber(number);
printf("\nOutput:%d",reverse);
return 0;
}


