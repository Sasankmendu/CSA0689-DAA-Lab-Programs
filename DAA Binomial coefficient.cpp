#include<stdio.h>
#include<conio.h>
int main()
{
	int a,n,r,i,j,k,fact=1,fact1=1,fact2=1,bc;
	printf("ENTER TWO NUMBERS:");
	scanf("%d%d",&n,&r);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	for(j=1;j<=r;j++)
	{
		fact2=fact2*j;
	}
	a=n-r;
	for(k=1;k<=a;k++)
	{
		fact1=fact1*k;
	}
	bc=fact/(fact1*fact2);
	printf("THE BINOMIAL COEFFICIENT OF TWO NUMBERS IS : %d",bc);
	return 0;
}
