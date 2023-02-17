#include <stdio.h>
int main()
{
    int num,orgNum,rem,result=0;
    printf("Enter a integer: ");
    scanf("%d",&num);
    orgNum =num;
	while (orgNum!=0)
	{
		rem=orgNum/10;
    	printf("%d",rem);
    }
}

