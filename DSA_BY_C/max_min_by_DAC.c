/* max and min elements of an array by (divide and conquer) method*/


#include<stdio.h>
int  DAC_max_min(int [],int,int);
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
     int low,high;
     low=0;
     high=n-1;
   DAC_max_min(array,low,high);
}
/* local functions */
int DAC_max_min(int array[],int low,int high)
{
   int MAX,MIN;
   int mid;
   int max1,max2,min1,min2;
   /* if problem is small then logic will  be this*/
   if(low==high)
   {
    return MAX=array[low];
    return MIN=array[low];
   }
   else if(high==low+1)
   {
     if(array[low]>array[high])
     {
        return MAX=array[low];
        return MIN=array[high];

     }
     else
     {
        return MAX=array[high];
        return MIN=array[low];
     }
   }
   /*if problem is big then logic will be this*/
   else
   {
     mid=(low+high)/2;// divide functions
      max1=DAC_max_min(array,low,mid);  //functions call
      min1=DAC_max_min(array,low,mid);  //functions call
      max2=DAC_max_min(array,mid+1,high);//functions call
      min2=DAC_max_min(array,mid+1,high);//functions call
       /*combine functions */
       if(max1>max2)
       {
            MAX=max1;
            printf("max element:%d",MAX);
       }
       else
       {
        MAX=max2;
         printf("max element:%d",MAX);
       }
       if(min1>min2)
       {
        MIN=min1;
         printf("min element:%d",MIN);

       }
       else
       {
         MIN=min2;
         printf("min element:%d",MIN);
       }
   }
}
