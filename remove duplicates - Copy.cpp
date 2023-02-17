#include<stdio.h>
int main()
{
   int a[50],i,j,k, count = 0, dup[50], number;
   printf("Enter the number of elements\n");
   scanf("%d",&number);
   printf("Enter the elements :\n");
   for(i=0;i<number;i++)
   {
      scanf("%d",&a[i]);
      dup[i] = -1;
   }
   printf("Entered element are: \n");
   for(i=0;i<number;i++){
      printf("%d ",a[i]);
   }
   for(i=0;i<number;i++)
   {
      for(j = i+1; j < number; j++)
	  {
         if(a[i] == a[j])
		 {
            for(k = j; k <number; k++)
			{
               a[k] = a[k+1];
            }
            j--;number--;
         }
      }
   }
   printf("\nAfter  removing the duplicate items from the list is:\n");
   for(i=0;i<number;i++)
   {
      printf("%d ",a[i]);
   }          
}