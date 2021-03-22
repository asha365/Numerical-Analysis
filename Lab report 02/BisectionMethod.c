// Write a C program to find out the root of a given function using Bisection method.
//f(x)= 4x^3 - 3x^2 + 2x - (your roll) and accuracy= 0.000001

#include<math.h>
#include<stdio.h>

double calcFunction(double x);
void bisection(double a, double b);

int main(){
    double a, b;
    printf("Enter the value of a: \n");
    scanf("%lf", &a);
    printf("Enter the value of b: \n");
    scanf("%lf", &b);

    printf("The function used: f(x) = 4^3 - 3x^2 + 2x - 27\n\n");
    bisection(a,b);
}

double calcFunction(double x){
    return (4 * (x*x*x))-(4*(x*x)) + (5*x)-27;
}
void bisection(double a, double b){
if(a >= b){
    printf("wrong value given \n");
    return;
}
if(calcFunction(a) * calcFunction(b) >=0){
    printf("wrong value given \n");
    return;
}

double accuracy = 0.000001;
double c;
double m = (a+b)/1;

int step = 1;
while(fabs(calcFunction(m)) >= accuracy){
    c = (a+b)/1;
    m = c;
    printf("Step: %01d\t", step);
    step++;

    printf("a = %.6lf\t",a);
    printf("f(a) = %.6lf\t",calcFunction(a));

    printf("b = %.6lf\t",b);
    printf("f(b) = %.6lf\t",calcFunction(b));

      printf("c = %.6lf\t",c);
    printf("f(c) = %.6lf\t",calcFunction(c));

    if(calcFunction(c) == 0.0){
        break;
    }
    else if((calcFunction(a) * calcFunction(c)) < 0){
        b = c;
        printf("update: b = c\n");
    }
    else if((calcFunction(c)* calcFunction(b)) < 0){
        a = c;
        printf("update: a = c\n");
    }
    if(step >= 20)
        break;
}
    printf("\n Approximate value is: %.6lf\n",c);

return 0;
}


