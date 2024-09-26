// LINEAR SEARCH OF "SORTED DATA".
#include<stdio.h>
int main()
{
    int n,i,x;
    printf("Enter size of array :");
    scanf("%d",&n);
    int L_serch[n];
   printf("\nStart enter the elements :\n");
   for(i=0;i<=n-1;i++)
   {
       scanf("%d",&L_serch[i]);
   }
   printf("\nEnter a value that you want to serch in list :");
   scanf("%d",&x);
   // main logic of linear search
   for(i=0;i<=n-1;i++)
   {
       if(x==L_serch[i])
       {
        printf("data found.\n");
        printf("\n positions of %d in list is:%d",x,i+1);
       }
       else
       {
         continue;
       }
   }

  return 0;
}


