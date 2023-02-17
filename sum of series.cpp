#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("Enter the num:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i!=n)
		{
			printf("%d","+",i);
			sum=sum+i;
		}
		else
		{
			printf("%d",sum);
		}
	}
	return 0;
}
