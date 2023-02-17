#include<stdio.h>#include<stdio.h>
int main()
{
	int n,sum=0,i=0;
	printf("Enter the num:");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	while(i<=n)
	{
		printf("%d+",i);
		i=i+2;
	}
	printf("=%d",sum);
	return 0;
}
