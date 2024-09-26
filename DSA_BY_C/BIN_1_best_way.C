// user should not enter data in sorting order/ascending order .
#include<stdio.h>
int main()
{
        int n,i,j;
         int mid,value,temp;
         printf("Binary search of elements in sorted array list.\n");
         printf("Enter size of array :");
         scanf("%d",&n);
         int bin_serch[n];
          printf("\nStart enter the elements :\n");
          for(i=1;i<=n;i++)
          {
             scanf("%d",&bin_serch[i]);
          }
          //main logic of selection sort in ascending order
           for(i=1;i<=n;i++)
           {
               for(j=i+1;j<=n;j++)
                {
                    if(bin_serch[i]>bin_serch[j])
                     {
                        temp=bin_serch[i];
                        bin_serch[i]=bin_serch[j];
                         bin_serch[j]=temp;
                     }
                }
           }
           //displaying the sorted data on screen
             printf("data in ascending order:\n");
              for(i=1;i<=n;i++)
              {
                 printf("%d\n",bin_serch[i]);
              }
          int x;
         printf("\nEnter a value that you want to serch in list :");
         scanf("%d",&x);
          int low,high;
         low=1;
         high=n;
        while(low<=high)
       {
          mid=(low+high)/2;
          value=bin_serch[mid];
          if(x==value||low==high)
          {
            if(x==value)
            {
               printf("position of %d is in list:%d\n",x,mid); 
               break;
            }
            else
            {
                printf("%d is not found in list.",x);
                break;
            }
          }
          else if(x>value)
          {
             low=mid+1;
             continue;
          }
          else
          {
             high=mid-1;
              continue;
          }
    }
}