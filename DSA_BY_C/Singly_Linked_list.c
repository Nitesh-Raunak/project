#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int value;
struct node *START=NULL,*P=NULL,*NN=NULL;
/* creating node */
void create_list()
{
   int stop_value;
   printf("Enter -1 to stop .\n");
   printf("Enter value:");
   scanf("%d",&stop_value);
        while(stop_value!=-1)
        {
            NN=(struct node *)malloc(sizeof(struct node));//it will return some address value to new node and then new node points to that new node.
            if(NN==NULL)
            {
                   printf("\n memory overflow.\n");
                   exit(0);
            }
             NN->data=stop_value;
             NN->next=NULL;
             if(START==NULL)
            {
                START=NN;
            }
            else
            {
                for (P=START;P->next!=NULL;P=P->next)
                {
                  P->next=NN;
                }
        
            }
             printf("Enter -1 to stop .\n");
             printf("Enter value:");
             scanf("%d",&stop_value);
       }
}
/* inserting new node at front of the linked list */
void insert_front(int value)
{
            NN=(struct node *)malloc(sizeof(struct node));
             if(NN==NULL)
            {
                printf("\n memory overflow.\n");
                 exit(0);
            }
               NN->data=value;
               NN->next=START;
               START=NN;
               printf("insertion done at front of the linked list.");
}
/* inserting new node at end of the linked list*/
void insert_end(int value)
{
         NN=(struct node *)malloc(sizeof(struct node));
            if(NN==NULL)
            {
                  printf("\n memory overflow.\n");
                  exit(0);
            }
            // start of main logic of insert end node
            NN->data=value;
             NN->next=NULL;
            if(START==NULL)
            {
              START=NN;
            }
            else
            {
                P=START;
                while(P->next!=NULL)//(p!=NULL) THIS CONDITION IS NOT VALID BECAUSE AT LAST P IS INDICATING THE NULL POINTER.
                {
                    P=P->next;
                }
                 P->next=NN;
                 printf("insertion done at end of the linked list.");
            }
          
            // end of main logic of insert end node //
           
}
void insert_node_at_particular_position(int value)
{
    printf("you can insert new node only if you have some node alreday.\n");
    struct node *P1;
    int pos,i=1;
     NN=(struct node *)malloc(sizeof(struct node));
             if(NN==NULL)
            {
                  printf("\n memory overflow.\n");
                  exit(0);
            }
           printf("Enter position where you want to insert new node:");
            scanf("%d",&pos);
           if(pos<=1)
            {
                insert_front(value);
            }
            else
            {
                 NN->data=value;
                 NN->next=NULL;
                  P=START;
                  P1=START;
                 while(P1!=NULL&&i<pos)
                 {
                   P=P1;
                   P1=P1->next;
                   i++;
                 }
                 P->next=NN;//p is back pointer
                 NN->next=P1;//p1 is forward pointer.
            }
             printf("insertion done  at  %d position in linked list.",pos);
            
}
/* traverse/display function */
void display()
{
        // start of main logic of traverse
            if(START==NULL)
            {
                printf("LIST IS EMPTY.");
                return ;
            }
               printf("\n\n list is:\n");
               for(P=START;P!=NULL;P=P->next)
               {
                  printf("%d-->",P->data);
               }
            
        // end of main logic of traverse
}
/* sorting of node value in ascending order */
void sort()
{
    int temp;
    struct node *a,*b;
         // selection sort
         for(a=START;a!=NULL;a=a->next)
         {
             for(b=a->next;b!=NULL;b=b->next)
             {
                if(a->data>b->data)
                {
                   temp=a->data;
                   a->data=b->data;
                   b->data=temp;
                }
             }
         }
}
void insert_in_sorted(int value)
{
    struct node *PREPTR;
    sort();
         NN=(struct node *)malloc(sizeof(struct node));
            if(NN==NULL)
            {
                  printf("\n memory overflow.\n");
                  exit(0);
            }
            NN->data=value;
            NN->next=NULL;
            if(START==NULL||START->data>NN->data)
            {
                NN->next=START;
                START=NN;
                return ;
            }
            P=START;
            PREPTR=START;
            while(P!=NULL && P->data<NN->data)
            {
               PREPTR=P;
               P=P->next;
            }
            NN->next=P;
            PREPTR->next=NN;
}
/* delete first node from linked list*/
void delete_first()
{
    // main logic of delete the first node
            if(START==NULL)
            {
                printf("LIST IS EMPTY.");
                return ;
            }
            P=START;
            printf("%d is deleted.",P->data);
            START=START->next;
            free(P);

}
/*delete last node from linked list */
void delete_last()
{
    struct node *x,*y;
             if(START==NULL)
            {
                printf("LIST IS EMPTY.");
                return ;
            }
            for(x=START,y=START;x->next!=NULL;x=x->next)
            {
               y=x; 
            }
            y->next=NULL;
            printf("%d is deleted.",x->data);
            if(START->next=NULL)
            {
                START=NULL;
            }
            free(x);
}
/* delete node from specified positions */
void delete_before_position()
{
    int pos,num;
           struct node *x,*y;
            if(START==NULL)
            {
                printf("LIST IS EMPTY.");
                return ;
            }
            printf("\n Enter position of node:");
            scanf("%d",&pos);
            if(pos<=1)
            {
               printf("Enter valid position to delete a node  before a node.");
            }
            else if(pos==2)
            {
                delete_first();
                return ;
            }
            else
            {
                x=START;
                 P=START;
                y=START;
                for(num=1;P!=NULL&&num<pos;num++)
                {
                    x=y;
                    y=P; 
                    P=P->next;
                }
                x->next=P;
                printf("%d is deleted .",y->data);
                free(y);
            }


}
void insert_node_before_particular_position(int value)
{
    printf("you can insert new node only if you have some node alreday.\n");
    struct node *P1;
    int pos,i=1;
     NN=(struct node *)malloc(sizeof(struct node));
             if(NN==NULL)
            {
                  printf("\n memory overflow.\n");
                  exit(0);
            }
           printf("Enter position where you want to insert new node:");
            scanf("%d",&pos);
           if(pos<=1)
            {
                insert_front(value);
            }
            else
            {
                 NN->data=value;
                 NN->next=NULL;
                  P=START;
                  P1=START;
                 while(P1!=NULL&&i<(pos-1))
                 {
                   P=P1;
                   P1=P1->next;
                   i++;
                 }
                 P->next=NN;//p is back pointer
                 NN->next=P1;//p1 is forward pointer.
            }
             printf("insertion done  before %d node in linked list.",pos);
            
}
void insert_node_after_particular_position(int value)
{
    printf("you can insert new node only if you have some node alreday.\n");
    struct node *P1;
    int pos,i=1;
     NN=(struct node *)malloc(sizeof(struct node));
             if(NN==NULL)
            {
                  printf("\n memory overflow.\n");
                  exit(0);
            }
           printf("Enter position where you want to insert new node:");
            scanf("%d",&pos);
           if(pos<=1)
            {
                insert_front(value);
            }
            else
            {
                 NN->data=value;
                 NN->next=NULL;
                  P=START;
                  P1=START;
                 while(P1!=NULL&&i<(pos+1))
                 {
                   P=P1;
                   P1=P1->next;
                   i++;
                 }
                 P->next=NN;//p is back pointer
                 NN->next=P1;//p1 is forward pointer.
            }
             printf("insertion done after %d node in linked list.",pos);
            
}
/* main function */
void main()
{
    int ch;
    while(1)
    {
        printf("\n\n SINGLY LINKED LIST.\n\n");
        printf("\n1.CREATE A LINKED LIST.\n2.DISPLAY A LINKED LIST.\n3.INSERT A NODE AT THE FRONT OF THE LINKED LIST.\n4.INSERT A NODE AT THE END OF THE LINKED LIST.\n5.SORT THE DATA OF LINKED LIST.\n6.INSERT A NODE SUCH THAT THE LINKED LIST IS IN ASCENDING ORDER.\n7.DELETE THE FIRST NODE OF THE LINKED LIST.\n8.DELETE THE LAST NODE OF THE LINKED LIST.\n9.DELETE THE NODE BEFORE THE SPECIFIED POSITION.\n10.INSERT NODE AT PARTICULAR POSITION\n11.INSERT NODE BEFORE PARTICULAR POSITION\n12.INSERT NODE AFTER PARTICULAR POSITION\n13.EXIT() \n");
        printf("\n\nEnter choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
               create_list();
        break;
        case 2:
               display();
        break;
        case 3:
               printf("Enter value:");
               scanf("%d",&value);
               insert_front(value);
        break;
        case 4:
                printf("Enter value:");
                scanf("%d",&value);
                insert_end(value);
        break;
        case 5:
             sort();
             break;
        case 6:
                printf("Enter value:");
                scanf("%d",&value);
                insert_in_sorted(value);
        break;
        case 7:
                 delete_first();
        break;
        case 8:
                delete_last();
        break;
        case 9:
                delete_before_position();
        break;
        case 10:
                  printf("Enter value:");
                 scanf("%d",&value);
                 insert_node_at_particular_position(value);
                 break;
        case 11:
                printf("Enter value:");
                scanf("%d",&value);
                insert_node_before_particular_position(value);
                break;
        case 12:
                 printf("Enter value:");
                scanf("%d",&value);
                insert_node_after_particular_position(value);
                break;
        case 13:
                exit(0);
        default:
                printf("INVALID CHOICE.");
        break;
        }
    }
    getch();
}
