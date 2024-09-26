#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front=-1,rear=-1;
int queue[MAX];
void Enqueue();//insert data in queue
void display();// display data of queue
void delete();
void peak();
void change();
void main()
{
         int ch;
         while(1)
         {
              printf("\n simple queue.\n ");
                printf("\n\n1.insert functions \n2.display functions \n3.delete function \n4.peak function \n5.change function \n6.exit() function\n\n\n");
                printf("Enter your choice:");
                scanf("%d",&ch);
                switch(ch)
                {
                    case 1:
                           Enqueue();
                     break;
                    case 2:
                           display();
                     break;
                     case 3:
                           delete();
                      break;
                      case 4:
                            peak();
                      break;
                      case 5:
                           change();
                      break;
                      case 6:
                      exit(0);
                      default :
                            printf("invalid choice");
                }
          }
     getch();
}
/* insert elements in queue */
void Enqueue() 
{
    int x;
    printf("\n\nEnter data in queue:");
    scanf("%d",&x);
    if(rear>MAX-1)
    {
        printf("\n queue overflow !\n");
    }
    else if(rear==MAX-1)
    {
      printf("\n queue is full \n");
    }
    else
    {
         if (front == -1)
         {
         front = 0; // First element to be inserted
         }
            rear=rear+1;
          queue[rear]=x;
         printf("%d is Inserted \n", x);
    }

}
/* show/display which are inserted in queue */
void display() 
{
    if((front == -1 || front > rear))
    {
       printf("Queue is empty!\n"); 
    }
    else
    {
       printf("\n Queue elements are:\n");
        for (int i = front; i <= rear; i++)
         {
            printf("%d\t", queue[i]);
         }
        printf("\n");
    }
}
/* delete functions */
void delete()
{
  if(front==-1)
  {
    printf("queue is underflow.");
  }
  else
  {
    printf("%d is deleted.",queue[front]);
    if(front==rear)
    {
      
      front=-1;
      rear=-1;
    }
    else
    {
      front++;
    }
  }
}
/* peak functions */
void peak()
{
   if(front==-1)
  {
    printf("queue is underflow.");
  }
  else
  {
    printf("last inserted data is %d.",queue[front]);
  }
}
/* change functions */
void change()
{
  int pos,val;
  printf("Enter position where you want to change the value:");
  scanf("%d",&pos);
  printf("\n Enter value that you want to put on the specified position:");
  scanf("%d",&val);
  if(pos>(rear=front-1))
  {
    printf("invalid index.");
  }
  else
  {
      queue[pos+front-1]=val;
      printf("\n value changed. \n");
  }
}
