#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n;
	printf("ENTER THE NUMBERS FOR WHICH YOU WANT TO FIND THE GCD:");
	scanf("%d%d",&m,&n);
	while(m!=n)
	{
		if(m>n)
		{
			m=m-n;
		}
		else
		{
			n=n-m;
		}
	}
	printf("THE GCD OF TO NUMBERS IS %d",m);
	return 0;
}
