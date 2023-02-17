#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 20
struct bookdetail
{
          char title[20];
          char author[20];
          char subject;
          float bookid;
};
void output(struct bookdetail v[],int n);
int main()
{
          struct bookdetail b[SIZE];
          int n,i;
          //    clrscr();
          printf("Enter the Numbers of Books:");
          scanf("%d",&n);
          printf("\n");
          for(i=0;i<n;i++)
          {
                   printf("\t=:Book %d Detail:=\n",i+1);
                   printf("\nEnter the Book title:\n");
                   scanf("%s",&b[i].title);
                   printf("Enter the Author of Book:\n");
                   scanf("%s",&b[i].author);
                   printf("Enter the subject of Book:\n");
                   scanf("%s",&b[i].subject);
                   printf("Enter the Bookid:\n");
                   scanf("%f",&b[i].bookid);
          }
          output(b,n);
          getch();
}
void output(struct bookdetail v[],int n)
{
          int i,t=1;
          for(i=0;i<n;i++,t++)
          {
                    printf("\n");
                   printf("Book No.%d\n",t);
                   printf("\tBook %d title is=%s \n",t,v[i].title);
                   printf("\tBook %d Author is=%s \n",t,v[i].author);
                   printf("\t\tBook %d subject is=%s \n",t,v[i].subject);
                   printf("\tBook %d bookid is=%f \n",t,v[i].bookid);
                    printf("\n");
          }
}
