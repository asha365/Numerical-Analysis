#include<stdio.h>
int main(){
    double a, b;

    printf("Enter value of a: \n");
    scanf("%lf",&a);

    printf("Enter value of b: \n");
    scanf("%lf",&b);

    printf("The function used is: 3x^3-3x+4 \n");
    printf("Initial value of a = %lf\n", a);
    printf("Initial value of b = %lf\n", b);
    bisection(a, b);
}

//user define function out of main function
double fun(double x){
    return 3*x*x*x-3*x+4;
}

//bisection function
void bisection( double a, double b){
    if(a >= b){
        printf("value of a & b is not correct \n");
        return;
    }

    if(fun(a)* fun(b) >= 0){
        printf("Incorrect value of a and b \n");
        return;
    }
    printf("hello");
    double acc = 0.000001;
    double c;
    double m = (a+b)/2;
    int n=1;
    while(fabs(fun(m)) > acc){
        c=(a+b)/2;
        m=c;
        printf("step=%d \t",n);
        n++;

        printf("a = %.6lf\t",a);
        printf("f(a)=%6lf\t", fun(a));

        printf(" = %.6lf\t",b);
        printf("f(b)=%6lf\t", fun(b));

        printf("c = %.6lf\t",c);
        printf("f(c)=%6lf\t", fun(c));

        if(fun(c)==0.0){
            break;
        } //end of while loop

        else if(fun(a) * fun(c)<0){
            b=c;
            printf("Update: b=c \n");
        }

        else{
            a=c;
             printf("Update: a=c \n");
        }
    }
      printf("The root is %.6lf",c);

return 0;
}
