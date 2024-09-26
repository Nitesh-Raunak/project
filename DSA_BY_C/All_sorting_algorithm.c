// selection sort(ascending+descending)
// bubble sort (ascending+descending)
// insertion sort (ascending+descending)
// selection and bubble sorting is also known as backward sorting or backward process because these two algo operates left-->right i.e left to right.
// insertion sort is also known as forward process bcz here second elements compared with first elements.
#include <stdio.h>
void selection_sort_in_decend(void);
void selection_sort_in_ascend(void);
void bubble_sort_in_decend(void);
void bubble_sort_in_ascend(void);
void insertion_sort_in_decend(void);
void insertion_sort_in_ascend(void);
void merge_sort_in_decend(void);
void merge_sort_in_ascend(void);

// main method
void main()
{
  int ch;
  printf("1.selection_sort_in_decend. \n 2.selection_sort_in_ascend.\n 3.bubble_sort_in_decend.\n 4.bubble_sort_in_ascend. \n 5.insertion_sort_in_decend.\n 6.insertion_sort_in_ascend.\n Enter your choice:\n");
  scanf("%d", &ch);
  switch (ch)
  {
  case 1:
    selection_sort_in_decend();
    break;
  case 2:
    selection_sort_in_ascend();
    break;
  case 3:
    bubble_sort_in_decend();
    break;
  case 4:
    bubble_sort_in_ascend();
    break;
  case 5:
    insertion_sort_in_decend();
    break;
  case 6:
    insertion_sort_in_ascend();
    break;
  case 7:
    merge_sort_in_decend();
    break;
  case 8:
    merge_sort_in_ascend();
    break;

  default:
    printf("invalid choice.");
  }
  getch();
}
// selection sort in decending order method
void selection_sort_in_decend(void)
{
  int i, j, temp;
  int n;
  printf("Enetr how many number you want to arrange:");
  scanf("%d", &n);
  int sort[n];
  printf("Start enter data :\n");
  for (i = 0; i <= n - 1; i++)
  {
    scanf("%d", &sort[i]);
  }
  // main logic of selection sort in decending order
  for (i = 0; i <= n - 1; i++)
  {
    for (j = i + 1; j <= n - 1; j++)
    {
      if (sort[i] < sort[j])
      {
        temp = sort[i];
        sort[i] = sort[j];
        sort[j] = temp;
      }
    }
  }
  // displaying the sorted data on screen
  printf("data in decending order:\n");
  for (i = 0; i <= n - 1; i++)
  {
    printf("%d\n", sort[i]);
  }
}
// selection sort in ascending order method
void selection_sort_in_ascend(void)
{
  int i, j, temp;
  int n;
  printf("Enetr how many number you want to arrange:");
  scanf("%d", &n);
  int sort[n];
  printf("Start enter data :\n");
  for (i = 0; i <= n - 1; i++)
  {
    scanf("%d", &sort[i]);
  }
  // main logic of selection sort in ascending order
  for (i = 0; i <= n - 1; i++)
  {
    for (j = i + 1; j <= n - 1; j++)
    {
      if (sort[i] > sort[j])
      {
        temp = sort[i];
        sort[i] = sort[j];
        sort[j] = temp;
      }
    }
  }
  // displaying the sorted data on screen
  printf("data in ascending order:\n");
  for (i = 0; i <= n - 1; i++)
  {
    printf("%d\n", sort[i]);
  }
}
// bubble sort in decending order method
void bubble_sort_in_decend(void)
{
  int i, j, temp;
  int n;
  printf("Enetr how many number you want to arrange:");
  scanf("%d", &n);
  int sort[n];
  printf("Start enter data :\n");
  for (i = 0; i <= n - 1; i++)
  {
    scanf("%d", &sort[i]);
  }
  // main logic of bubble sort in decending order
  for (i = 0; i <= n - 1; i++)
  {
    for (j = 0; j < n - 1; j++)
    {
      if (sort[j] < sort[j + 1])
      {
        temp = sort[j];
        sort[j] = sort[j + 1];
        sort[j + 1] = temp;
      }
    }
  }
  // displaying the sorted data on screen
  printf("data in decending order:\n");
  for (i = 0; i <= n - 1; i++)
  {
    printf("%d\n", sort[i]);
  }
}
// bubble sort in ascending order method
void bubble_sort_in_ascend(void)
{
  int i, j, temp;
  int n;
  printf("Enetr how many number you want to arrange:");
  scanf("%d", &n);
  int sort[n];
  printf("Start enter data :\n");
  for (i = 0; i <= n - 1; i++)
  {
    scanf("%d", &sort[i]);
  }
  // main logic of bubble sort in decending order
  for (i = 0; i <= n - 1; i++)
  {
    for (j = 0; j < n - 1; j++)
    {
      if (sort[j] > sort[j + 1])
      {
        temp = sort[j];
        sort[j] = sort[j + 1];
        sort[j + 1] = temp;
      }
    }
  }
  // displaying the sorted data on screen
  printf("data in ascending order:\n");
  for (i = 0; i <= n - 1; i++)
  {
    printf("%d\n", sort[i]);
  }
}
// insertion sort in descending order method
void insertion_sort_in_decend(void)
{
  int i, j, temp;
  int n;
  printf("Enetr how many number you want to arrange:");
  scanf("%d", &n);
  int sort[n];
  printf("Start enter data :\n");
  for (i = 0; i <= n - 1; i++)
  {
    scanf("%d", &sort[i]);
  }
  // main logic of insertion sort in decending order
  for (i = 0; i <= n - 1; i++) // if (i<n-1) then also will be true
  {
    for (j = 1; j <= n - 1; j++)
    {
      if (sort[j] > sort[j - 1])
      {
        temp = sort[j];
        sort[j] = sort[j - 1];
        sort[j - 1] = temp;
      }
    }
  }
  // displaying the sorted data on screen
  printf("data in decending order:\n");
  for (i = 0; i <= n - 1; i++)
  {
    printf("%d\n", sort[i]);
  }
}
// insertions sort in ascending order method
void insertion_sort_in_ascend(void)
{
  int i, j, temp;
  int n;
  printf("Enetr how many number you want to arrange:");
  scanf("%d", &n);
  int sort[n];
  printf("Start enter data :\n");
  for (i = 0; i <= n - 1; i++)
  {
    scanf("%d", &sort[i]);
  }
  // main logic of insertion sort in ascending order
  for (i = 0; i <= n - 1; i++) // if (i<n-1) then also will be true
  {
    for (j = 1; j <= n - 1; j++)
    {
      if (sort[j] < sort[j - 1])
      {
        temp = sort[j];
        sort[j] = sort[j - 1];
        sort[j - 1] = temp;
      }
    }
  }
  // displaying the sorted data on screen
  printf("data in ascending order:\n");
  for (i = 0; i <= n - 1; i++)
  {
    printf("%d\n", sort[i]);
  }
}
