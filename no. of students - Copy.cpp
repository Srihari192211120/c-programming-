#include<stdio.h>
int main()
{
	int tot,sta,std,nts;
	printf("Enter total users : ");
	scanf("%d",&tot);
	if(tot>0)
	{
		printf("Enter staff users : ");
		scanf("%d",&sta);
		nts=sta/3;
		if(tot>=(sta+nts))
		{
			std=tot-(sta+nts);
			printf("\nNo. of student users : %d",std);
			printf("\nNo. of Non teaching staff : %d",nts);
		}
		else
		{
			printf("...Invalid Input...");
		}
	}
	else
	{
		printf("...Invalid Input...");
	}
}
	