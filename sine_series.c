#include<stdio.h> 
main()
{
    int i, n,x,f=1;
    float s, t;  
    printf(" Enter the no. : ");
    scanf("%d",&x);
    printf(" Enter the limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i+2)
    {
	f=f*i;
	t=x/f;
        s=s+t;
    }
    printf(" The value of Sin(%d) = %f",x,s);
}

