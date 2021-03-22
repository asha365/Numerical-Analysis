//3. Write a (c/ Java/ C++/ C#/ Python/ any language) program for Simpson's 3/8 Rule.
#include <stdio.h>
#include<math.h>
double f(double x){
return x*x;
}
main(){
int n,i ;
double s,d,h,x,sum=0, integral;
printf("\nEnter the no of sub-interval (MUTIPLE OF 3) : ");
scanf("%d",&n);
printf("\nEnter the initial limit : ");
scanf("%lf", &s);
printf("\nEnter the final  limit :");
scanf("%lf",&d);
h= fabs (d-s)/n;
for(i=1; i<n;i++){
    x=s+i*h;
    if(i%3==0){
        sum=sum+2*f(x);
    }
    else{
        sum=sum+3*f(x);

    }
}
integral=(3*h/8)*f(s)+f(d)+sum;
printf("\n The integral is : %lf", integral);
}
