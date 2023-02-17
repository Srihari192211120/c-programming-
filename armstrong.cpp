#include <stdio.h>
int main()
{
    int num,orgNum,rem,result = 0;
    printf("Enter a integer: ");
    scanf("%d",&num);
    orgNum =num;
	 while (orgNum != 0)
	{
        rem=orgNum % 10;
    	result+=rem*rem*rem;
       	orgNum/= 10;
    }
	if(result == num)
    	printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}
