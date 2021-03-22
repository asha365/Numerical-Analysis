//Write a (c/ Java/ C++/ C#/ Python/ any language) program for Gregory-Newton backward interpolation Formula.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
main()
{
      float x[20],y[20],f,s,d,h,p;
      int j,i,k,n;
      printf("Enter the value of the elements :");
      scanf("%d",&n);
      printf("Enter the value of x:");
      for(i=1;i<=n;i++)
      {
        scanf("%f",&x[i]);
      }

      printf("Enter the value of y:");
      for(i=1;i<=n;i++)
      {
        scanf("%f",&y[i]);
      }
      h=x[2]-x[1];
      printf("Enter the searching point f:");
      scanf("%f",&f);
      s=(f-x[n])/h;
      d=y[n];
      p=1;

for(i=n,k=1;i>=1,k<n;i--,k++)
{
for(j=n;j>=1;j--)
{
    y[j]=y[j]-y[j-1];
}
    p=p*(s+k-1)/k;
    d=d+p*y[n];
}
printf("for f=%f ,ans is=%f",f,d);
getch();
}
