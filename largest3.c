#include<stdio.h>
main()
{
int a,b,c;
printf("Enter three no.:- ");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&c){
printf("%d is largest",a);
}
else if(b>c&&a){
printf("%d is largest",b);
}
else{
printf("%d is largest",c);
}
}

