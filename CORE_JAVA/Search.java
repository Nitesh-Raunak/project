import java.lang.*;
import java.util.*;
public class Search
{
   public static void main(String[] args) 
   {
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter size of array :");
       int n=sc.nextInt();
       int i=0,x;
       int L_serch[]=new int[n];
       System.out.println("Start enter the elements :");
       for(i=0;i<=n-1;i++)
       {
        L_serch[i]=sc.nextInt();
       }
       System.out.println("Enter a value that you want to serch in list :");
       x=sc.nextInt();
   for(i=0;i<=n-1;i++)
   {
       if(i==n-1||x<L_serch[i])
       {
           System.out.println("data is not found in list.");
           break;
       }
       else if(i==n-1||x==L_serch[i])
       {
        System.out.println("index position of "+x+"\t"+"is :"+(i+1));
           break;
       }
       else if(i==n-1||x>L_serch[i])
       {
           continue;
       }
   }
   } 
}
    