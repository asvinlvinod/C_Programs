#include<stdio.h>
main(){
int n,f=0,i;
printf("Enter a no:-");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(n%i==0)
f++;
}if(f==2)
printf("%d is a prime no.",n);
else
printf("%d is not a prime no.",n);
}
