#include<stdio.h>
#include<math.h>
int digsum()
{
	int r,s=0,m;
	printf("Enter the No.:- ");
	scanf("%d",&m);
	while(m>0)
	{
		r=m%10;
		m=m/10;
		s=s+r;
	}
	return s;
}
int prime()
{
	int i,n,f=0;
	printf("Enter the No.:- ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			f++;
	}
	if(f==2)
	{
		printf("%d is Prime No.",n);
	}
	else
	{
		printf("%d is not Prime No.",n);
	}
}
int power()
{
	int p,d,e;
	printf("Enter the No.:- ");
	scanf("%d",&p);
	printf("Enter the Power:- ");
	scanf("%d",&d);
	e=pow(p,d);
	return e;
}
main()
{
	int ch,a,c;
	printf("MENU \n1. Sum of Digits\n2. Check Prime\n3.Power of the No.\n enter the choice:- ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1: a=digsum();
		printf("The sum of Digits= %d",a);
		break;
	case 2: prime();
		break;
	case 3: c=power();
		printf("Power is:- %d",c);
		break;
	default: printf("Invalid Option");
	}
}
