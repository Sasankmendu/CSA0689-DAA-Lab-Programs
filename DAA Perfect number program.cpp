#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,j=0;
	printf("ENTER THE NUMBER:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			j=j+i;
		}
	}
	if(j==n)
	{
		printf("%d IS A PERFECT NUMBER",n);
	}
	else
	{
		printf("%d IS NOT A PERFECT NUMBER",n);
	}
	return 0;
}
