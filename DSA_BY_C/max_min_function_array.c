/* max and min elements in an array by (simple loop) */
#include<stdio.h>
/*method prototype */
void MAX(int ,int []);
void MIN(int ,int []);
/* main method*/
int max=0,min=0;
void main()
{
              int n,i;
              printf("Enter size of array :");
              scanf("%d",&n);
              int array[n];
              printf("\nStart enter the elements :\n");
              /* taking elements in arrays */
              for(i=0;i<=n-1;i++)
              {
                  scanf("%d",&array[i]);
              }
              printf("\n \n Enter your choice.\n\n 1.max element in array \n2.min element in array\n");
             int h;
             printf("Enter choice:");
             scanf("%d",&h);
             /* switch case */
             switch(h)
            {
                case 1:
                MAX(n,array);
                break;
                 case 2:
                     MIN(n,array);
                    break;
                 default :
                   printf("invalid choice.");
            }
 getch();
}
/* max function to find highest elements in array*/
void MAX(int m,int array[])  //this is the way where we take arguments an array and its size.
{
    /* main logic of max functions*/
    int i;
    int a;
    max=array[0];
    for(i=1;i<=m-1;i++)
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
}
/* min functions to find lowest elements in array*/
void MIN(int b,int array[])
{
    /* main logic of min functions*/
    int i;
    int a;
    min=array[0];
    for(i=1;i<=b-1;i++)
    {
        a=min;
        if(a<array[i])
        {
            min=a;
        }
        else
        {
            min=array[i];
        }
    }
     printf("\n\n highest value of elements in array is:%d",min);
}

