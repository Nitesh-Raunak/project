#include <stdio.h>
#include <stdlib.h>//header file used for exit() functions
#define SIZE 4
int top = -1, inp_array[SIZE];//global declarations
void push();//push function prototype
void pop();//pop function prototype
void show();//display function prototype
void search_position_of_element();
void search_elements_of_position();
void change();
int main()// main method
{
    int choice;
    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.search the elements position\n5.search the element of given position\n6.change elements\n7.exit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            search_position_of_element();
            break;
        case 5:
            search_elements_of_position();
            break;
        case 6:
             change();
            break;
        case 7:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

void push()//insertion is push
{
    int x;
   if (top>=SIZE-1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
        inp_array[top] = x;
        printf("\n %d is inserted in stack.\n",x);
    }
}
void pop()//deletion is pop
{
    if (top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d", inp_array[top]);
        printf("\n %d is removed from stack.\n ",inp_array[top]);
        top = top - 1;
        
    }
}

void show()//display functions
{
    if (top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", inp_array[i]);
        }
    }
}
void search_position_of_element()//searching method
{
    int x;
    printf("Enter data that you want to find in stack:");
    scanf("%d",&x);
    if(top==-1)
    {
        printf("\nstack underflow!!! and stack is empty.\n");
    }
    else if(top>=SIZE-1)
    {
       printf("\nstack overflow!!! and stack is full.\n");
    }
    else
    {
    for(int i=top;i>=0;i--)
    {
       if(x==inp_array[i])
       {
        printf("\n\nposition of %d in stack is %d",x,i+1);
       }
       else
       {
          continue;
       }
    }
    }
}
void search_elements_of_position()//searching method
{
    int x;
    printf("Enter position of stack :");
    scanf("%d",&x);
    if(x>SIZE)
    {
        printf("overflow");
    }
    else if(x<=0)
    {
        printf("undrflow");
    }
    else
    {
       printf("\n\n %d is elements of position %d in stack.",inp_array[x-1],x);
    }
}
void change()// change function
{
    int y;
    printf("Enter position where you want to change:");
    scanf("%d",&y);
    int x;
    printf("\nEnter elements:");
    scanf("%d",&x);
    if(y>SIZE)
    {
        printf("overflow");
    }
    else if (y<=0)
    {
      printf("underflow");
    }
    else
    {
      inp_array[y-1] = x;
    }
}