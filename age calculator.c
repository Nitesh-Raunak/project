#include<stdio.h>
int main()
{
    int dc1,do2,mc1,mo2,yc1,yo2;//dc1-current date    mc1-current month     yc1-current year     do2-old date    mo2-old month    yo2-old year
      int i,a,b,c,d,e,f,mn,dn,yn,p,q;//mn-new month  dn-new date  yn-new year
      int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12;
      int total_month;
      int j;
      printf("Enter either one option\n");
    printf("1.age calculation 2.time calculation of interest money\n");
    printf("j=");
    scanf("%d",&j);
    if(j==1)
    {
       printf("Enter DATE OF BIRTH \n"); 
    }
    else
    {
         printf("Enter DATE ON WHICH YOU GAVE MONEY TO SOMEONE\n");  
    }
    printf("old date:");
    scanf("%d",&do2);
    printf("old month:");
    scanf("%d",&mo2);
    printf("old year:");
    scanf("%d",&yo2);
    switch(mo2)
    {
            case 1:
            printf("old month:-january:31");
            break;
            case 2:
              if(yo2%4==0)
              {
                  printf(" old month:-february:29");
              }
              else
              {
               printf(" old month:-february:28");
              }
            break;
            case 3:
            printf("old month:-march:31");
            break;
            case 4:
            printf("old month:-april:30");
            break;
            case 5:
            printf("old month:-may:31");
            break;
            case 6:
            printf("old month:-june:30");
            break;
            case 7:
            printf("old month:-july:31");
            break;
            case 8:
            printf("old month:-august:31");
            break;
            case 9:
            printf("old month:-september:30");
            break;
            case 10:
            printf("old month:-october:31");
            break;
            case 11:
            printf("old month:-november:30");
            break;
            case 12:
            printf("old month:-december:31");
            break;
            default :
             printf(" you have enter invalid month");
             break;
   }
    if(j==1)
    {
       printf("\nEnter current date that you want \n"); 
    }
    else
    {
         printf("\nEnter DATE ON WHICH YOU GET MONEY FROM SOMEONE\n");  
    }
    printf("\ncurrent date:");
    scanf("%d",&dc1);
    printf("current month:");
    scanf("%d",&mc1);
    printf("current year:");
    scanf("%d",&yc1);
   switch(mc1)
   {
            case 1:
            r1=31;
            printf(" current month:-january\n");
            printf("Number of days in this month:%d ",r1);
            break;
            case 2:
              if(yc1%4==0)
              {
                  r2=29;
                  printf(" current month:-february\n");
                  printf("Number of days in this month:%d ",r2);
              }
              else
              {
                  r2=28;
               printf(" current month:-february\n");
               printf("Number of days in this month:%d ",r2);
              }
            break;
            case 3:
            r3=31;
            printf("current month:-march\n");
            printf("Number of days in this month:%d ",r3);
            break;
            case 4:
            r4=30;
            printf("current month:-april\n");
            printf("Number of days in this month:%d ",r4);
            break;
            case 5:
            r5=31;
            printf("current month:-may\n");
            printf("Number of days in this month:%d ",r5);
            break;
            case 6:
            r6=30;
            printf("current month:-june\n");
            printf("Number of days in this month:%d ",r6);
            break;
            case 7:
            r7=31;
            printf("current month:-july\n");
            printf("Number of days in this month:%d ",r7);
            break;
            case 8:
            r8=31;
            printf("current month:-august\n");
            printf("Number of days in this month:%d ",r8);
            break;
            case 9:
            r9=30;
            printf("current month:-september\n");
            printf("Number of days in this month:%d ",r9);
            break;
            case 10:
            r10=31;
            printf("current month:-october\n");
            printf("Number of days in this month:%d ",r10);
            break;
            case 11:
            r11=30;
            printf("current month:-november\n");
            printf("Number of days in this month:%d ",r11);
            break;
            case 12:
            r12=31;
            printf("current month:-december\n");
            printf("Number of days in this month:%d ",r12);
            break;
            default :
             printf(" you have enter invalid month");
             break;
   }
   
    for(i=1;i<=1;i++)
    {
        a=dc1;
        b=mc1;
        c=yc1;
        d=do2;
        e=mo2;
        f=yo2;
        if(mc1>0&&mc1<=12)
       {
            if(a>=d)                                         
            {                                       
              p=b;                                        
              dn=a-d;                                         
           } 
           else
           {
               switch(mc1)
               {
                 case 1:
                 r1=31;
                 dn=a+r1-d;
                  break;
                  case 2:
                  if(yc1%4==0)
                   {
                    r2=29;
                     dn=a+r2-d;
                    }
                   else
                   {
                    r2=28;
                    dn=a+r2-d;
                    }
                  break;
                case 3:
                r3=31;
                 dn=a+r3-d;
                 break;
                case 4:
                r4=30;
                dn=a+r4-d;
                break;
                case 5:
                 r5=31;
                dn=a+r5-d;
                break;
                case 6:
                r6=30;
                dn=a+r6-d;
                break;
               case 7:
                r7=31;
                dn=a+r7-d;
               break;
               case 8:
               r8=31;
                dn=a+r8-d;
                break;
               case 9:
                r9=30;
                dn=a+r9-d;
                break;
                case 10:
               r10=31;
               dn=a+r10-d;
               break;
               case 11:
               r11=30;
               dn=a+r11-d;
               break;
               case 12:
              r12=31;
               dn=a+r12-d;
              break;
            } 
            p=--b;
           }
       }
       else
       {
           break;
       }
        if(p>=e)                                
        {                                                   
           q=c;                                             
            mn=p-e;                                         
        }                                       
        else                                
        {                                       
          q=--c;                                            
           mn=p+12-e;                                   
        }                                       
        if(c>=f)                            
        {                                   
            yn=c-f;                             
        }                                   
    }                                                       
    printf("\nYear:%d\tMonth:%d\tDay:%d",yn,mn,dn);
   if(j==2)
   {
      if(dn>15)
      {
          total_month=1+mn+12*yn;
          printf("\ntotal month:%d",total_month);
      }
      else
      {
          total_month=0+mn+12*yn;
           printf("\ntotal month:%d",total_month); 
      }
   }
   else
   {
       total_month=0+mn+12*yn;
         printf("\ntotal month:%d",total_month); 
   }
    return 0;                                               
}                                           
                                                           


