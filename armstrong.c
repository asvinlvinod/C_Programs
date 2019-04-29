#include<stdio.h>
#include<math.h>
main(){
int n,m,o,s=0,r,t,c=0;
printf("Enter the no:");
scanf("%d",&n);
m=n;
o=n;
while(n>0)
{
n=n/10;
c++;
}
while(m>0)
{
t=m%10;
m=m/10;
s=s+pow(t,c);
}
if(s==o)
printf("\nArmstrong No.\n");
else
printf("\nNot Armstrong No.\n");
}
