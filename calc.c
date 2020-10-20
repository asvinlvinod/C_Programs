#include <stdio.h>
main()
{
int a=4,b=8;
int s=a+b;
int d=a-b;
int p=a*b;
int D=a/b;
printf("Sum=%d",s);
printf("\nDifference=%d",d);
printf("\nProduct=%d",p);
printf("\nDivision=%d",D);
}

------------------------------------------------------
 #include <stdio.h>
main()
{
int a,b,s=0,d=0,p=0,D=0;
printf("Enter the values for a and b");
scanf("a=%d & b=%d",&a,&b);
s=a+b;
d=a-b;
p=a*b;
D=a/b;
printf("Sum=%d",s);
printf("\nDifference=%d",d);
printf("\nProduct=%d",p);
printf("\nDivision=%d",D);
}
