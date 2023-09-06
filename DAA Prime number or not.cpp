#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j=0,n;
	printf("ENTER A NUMBER:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			j=1;
			break;
		}
	}
	if(j==1)
	{
		printf("%d IS NOT A PRIME NUMBER.",n);
	}
	else
	{
		printf("%d IS A PRIME NUMBER.",n);
	}
	return 0;
}
