#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k=0,count=0;
	printf("ENTER HOW MANY PRIME NUMBERS YOU WANT TO PRINT:");
	scanf("%d",&n);
	for(i=2;i<=1000;i++)
	{
		for(j=2;j<i;j++)
		{
			if(j%i==0)
			{
				k=1;
				break;
			}
		}
		if(k==0 || j==2)
		{
			printf("%d ",j);
			count++;
		}
		if(count==n)
		{
			break;
		}
	}
	return 0;
}
