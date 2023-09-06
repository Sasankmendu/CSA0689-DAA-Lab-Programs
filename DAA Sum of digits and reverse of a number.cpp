#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j,k=0,n;
	printf("ENTER THE NUMBER:");
	scanf("%d",&n);
	while(n!=0)
	{
		j=n%10;
		k=k+j;
		i=i*10+j;
		n=n/10;
	}
	printf("THE SUM OF DIGITS IS : %d\n",k);
	printf("THE REVERSE OF THE NUMBER IS : %d",i);
	return 0;
}
