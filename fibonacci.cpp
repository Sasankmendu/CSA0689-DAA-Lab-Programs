#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,n1,n2,n3;
	printf("ENTER n VALUE:");
	scanf("%d",&n);
	n1=0;
	n2=1;
	printf("%d%d",n1,n2);
	for(i=1;i<=n;++i)
	{
		n3=n1+n2;
		printf("%d",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}
