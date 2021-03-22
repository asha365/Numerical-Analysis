// Write a C program to find out the root of a given function using False Position method.
//f(x)= 2x^3 - 5x + (your roll) and accuracy= 0.00001

#include<stdio.h>
#include<conio.h>
#include<math.h>

//define equation to be solved.
 #define f(x)  2*x*x*x-5*x+19

int main(){
float x0, x1, x2, f0, f1, f2, err;
int step = 1;
/*inputs*/
up:
    printf("\nEnter two numbers:\n");
    scanf("%f%f",&x0,&x1);
    printf("Enter eccuracy:\n");
    scanf("%f",&err);

    //Calculating factorial values
    f0 = f(x0);
    f1 = f(x1);
    //Calculating whether given guesses brackets the root or not
    if(f0*f1>0.0){
        printf("Incorrect Initial Guesses.\n");
        goto up;
    }

    //Implementing Regula Falsi or Position Method
    printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");

    do{
        x2 = x0-(x0-x1)*f0/(f0-f1);
        f2 = f(x2);
        printf("%d\t\t%f\t%f\t%f\n",step, x0, x1, x2, f2);

        if(f0*f2<0){
           x1=x2;
           f1=f2;
        }
        else{
            x0 = x2;
            f0 = f2;
        }
        step = step + 1;
    }
    while(fabs(f2)>err);
    printf("\nRoot is: %f", x2);
    getch();

return 0;
}
