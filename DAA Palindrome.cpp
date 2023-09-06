#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str1[200],str2[200];
	int i=0,j,k=0,l;
	printf("ENTER THE STRING:");
	scanf("%s",str1);
	
	for(i=0;str1[i]!='\0';++i)
	{
		
	}
	printf("THE LENGTH OF THE STRING IS:%d",i);
	for(j=i-1;j>=0;j--)
	{
		str2[i-j-1]=str1[j];
	}
	for(k=0;k<i;k++)
	{
		if(str2[k]!=str1[k])
		{
			k=1;
			break;
		}
	}
	if(k==0)
	{
		printf("%s IS A PALINDROME.",str1);
	}
	else
	{
		printf("%s IS NOT A PALINDROME.",str1);
	}
	return 0;
}
