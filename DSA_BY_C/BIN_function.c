//BINARY SEARCH OF SORTED DATA BY USING LEFT BIASED.1
//best way to do binary search of data in list.
//when number is repeated then first position of repetations  are given.
#include<stdio.h>
void Binary_search(int,int[]);
void main()
{
    int n,i;
    printf("Binary search of elements in sorted array list.\n");
    printf("Enter size of array :");
    scanf("%d",&n);
    int bin_serch[n];
   printf("\nStart enter the elements :\n");
   for(i=1;i<=n;i++)
   {
       scanf("%d",&bin_serch[i]);
   }
   Binary_search(n,bin_serch);
    getch();
}

void Binary_search(int n,int bin_serch[n])
{
  int i,x;
    int mid,value;
    int low,high;
    int j,temp;
    printf("sorted array:\n");
          for(i=0;i<=n-1;i++)// if (i<n-1) then also will be true
           {
               for(j=1;j<=n-1;j++)
                {
                    if(bin_serch[j]<bin_serch[j-1])// ascending logic
                     {
                        temp=bin_serch[j];
                        bin_serch[j]=bin_serch[j-1];
                         bin_serch[j-1]=temp;
                     }
                }
           }
           
  printf("\nEnter a value that you want to serch in list :");
  scanf("%d",&x);
  low=1;
   high=n;
   for(i=1;;i++)
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


