#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,s,r,n=1;
	printf("ENTER THE NUMBER OF ROWS YOU WANT TO PRINT:");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(s=1;s<=r-i;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
	return 0;
}
