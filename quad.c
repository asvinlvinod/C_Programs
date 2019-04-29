#include<stdio.h>
#include<math.h>
main()
{
int a,b,c,d;
float r1,r2;
printf("Enter a,b,c:");
scanf("%d\t %d\t %d",&a,&b,&c);
if(a==0)
{
printf("Not a valid Eq.");
}
else
{
d=(b*b-4*a*c);
if(d>0)
{
printf("The roots are real\n");
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("%f, %f are the roots",r1,r2);
}
else if(d==0)
{
r1=(-b/(2*a));
printf("%f is the root",r1);
}
else
{
printf("The roots are imaginary");
}
}
}
