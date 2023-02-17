#include<stdio.h>
int main()
{
	int arr[100],i=0,j,r,N;
	printf("Enter the num:");
	scanf("%d",&N);
	while(N!=0)
	{
		r = N % 10;
		arr[i]=r;
		i++;
		N=N/10;
	}
	for (j=i-1;j>-1;j--)
	{
		printf("%d ",arr[j]);
	}

}
