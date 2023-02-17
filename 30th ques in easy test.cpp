#include<stdio.h>
int main() 
{

   int m1,m2,m3;
   int sum;
   float percentage;
  
//    clrscr();

    printf("C Program to Calculate total marks scored in Exams :  ");

    printf("\n\n Enter Marks Scored in m1 : ");
	scanf("%d", &m1);
    
    printf("\n\n Enter Marks Scored in m2  : ");
    scanf("%d", &m2);
    
    printf("\n\n Enter Marks Scored in m3  : ");
    scanf("%d", &m3);
      
    sum = m1+m2+m3;
    
    percentage =  (sum*100)/300;
    
    printf("\n\n Total marks scored  = %d /300", sum );
    
    printf("\n\n Percentage Scored  = %f", percentage );
//	getch();


}
