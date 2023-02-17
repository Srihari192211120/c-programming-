#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("Enter the num:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i*i*i;
	}
	printf("Sum=%d",sum);
	return 0;
}
