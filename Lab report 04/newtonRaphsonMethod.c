
/* Write a C program to find out the root of a given function using Newton-Raphson method
f(x)= 2x^3 - 5x + 19 and accuracy= 0.00001 */

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define f(x) 2*x*x*x-5*x+19  // used  function
#define g(x)  6*x*x-5   // derivation of f(x)

main()
{
    printf("Griven function is : 2x^3-5x+19 \n ");
    double a,b,x1,f1;

// step 1 starts
    printf("Enter value for a:  ");
    scanf("%lf", &a);

    printf(" Enter value for b: ");
    scanf("%lf", &b);

    if(a>=b)
    {
        printf("Invalid a and b \n");
    }

    double ac=0.00001;
    double fa=f(a);
    double fb=f(b);
    printf("f(a)=%lf\n", fa);
    printf("f(b)=%lf\n", fb);

    if((fa*fb)>=0)
    {
        printf("Multiplication is incorrect \n");
    }
    // step 1 ends
    printf("step\t x0\t        f(x0)        \tx1         \tf(x1)        \tUpdate  \n ");

    // step 2 starts
    int step=1;
    double x0=(a+b)/2;
    // step 2 ends
    // step 3 starts
    do
    {
        printf("%d \t", step);
        printf("%lf \t", x0);

        double f0=f(x0);
        printf("%lf \t", f0);

        double g0=g(x0);
        x1=x0-(f0/g0);
        printf("%lf\t", x1);
        // step 3 ends

        // step 4 starts
        f1=f(x1);
        printf("%lf\t", f1);
        if(f1==0)
        {
            printf("Exact Root is : %lf \n ", x1);
            exit(0);
        }
        else
        {
            x0=x1;
            printf("x0=x1 .\n");
            step++;
            //step 4 ends
        }
    }
    while(fabs(f1)>ac);
    printf("The root is : %lf \n", x1);
}
