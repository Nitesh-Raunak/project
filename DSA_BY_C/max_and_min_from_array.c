#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter size of array :");
    scanf("%d",&n);
    int array[n];
   printf("\nStart enter the elements :\n");
   for(i=0;i<=n-1;i++)
   {
       scanf("%d",&array[i]);
   }
   // printf("highest value of elements :\n");
   int max,a;
   max=array[0];
  /*logic for highest in array */
   for(i=1;i<=n-1;i++)
   {
       a=max;
       if(a>array[i])
       {
        max=a;
       }
       else
       {
         max=array[i];
       }
   }
printf("\n\n highest value of elements in array is:%d",max);
/* logic for lowest in array*/
int b,min;
 min=array[0];
 int j;
for(j=1;j<=n-1;j++)
   {
       b=min;
       if(b<array[j])
       {
        min=b;
       }
       else
       {
         min=array[j];
       }
   }
   printf("\n\n lowest value of elements in array is:%d\n",min);
getch();
}