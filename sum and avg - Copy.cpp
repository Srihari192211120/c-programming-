#include<stdio.h>
int  main( )
{
int  a[], n, i ;
float  avg,sum = 0 ;
printf(" Enter the Numbers of element in Array:\n ") ;
scanf("%d ",&n) ;
printf(" Enter the Array of Element : \n") ;
for(  i = 0 ; i <= n ; i++)
{
scanf("%d ",&a[i]) ;
}
for (  i = 0 ; i <= n ; i++)
{
sum = sum + a[i] ;
avg = sum / n ;}
printf("\n Sum of Element of Array is : %f ",sum) ;
printf("\n Average of Element of Array are : %f ",avg) ;
return ( 0 ) ;
}