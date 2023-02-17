#include<stdio.h>
int main()
{
 	int i,factorial,n;
 	printf("Enter a number: ");
 	scanf("%d",&n);
	if(n<0)
	{
	printf("Invalid input...");
	}
	else
	{
		if(n==0)
		{
		printf("The factorial of %d is 1",n);
		}
		else
		{
 		factorial=1;
 		for(i=1;i<=n;i++)
 		{
		 	factorial=factorial*i;
		}
		printf("The factorial of %d is %d",n,factorial);
		}
	}
}
