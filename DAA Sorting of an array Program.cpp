#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,temp,a[100];
	printf("ENTER THE NUMBER OF ELEMENTS:");
	scanf("%d",&n);
	printf("ENTER THE ELEMENTS INTO THE ARRAY:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("THE SORTED ARRAY IS:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	return 0;
}
