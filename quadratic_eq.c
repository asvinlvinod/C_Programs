#include <stdio.h>
main(){
int n1,n2;
printf("Enter 1st no:-");
scanf("%d",&n1);
printf("Enter 2nd no:-");
scanf("%d",&n2);
int c=(n1+n2)*(n1+n2);
int d=(n1-n2)*(n1-n2);
printf("\nSquare of (a+b)=%d",c);
printf("\nSquare of (a-b)=%d",d);
}

