/* merge sort in simple way */
#include <stdio.h>
/* merge algorithm (one of the easy way to doing this)*/
void Merge(int sort[], int low, int mid, int high)
{
  int i, j, k, r = 0;
  i = low;
  k = mid + 1;
  j = low;
  int n1; // size of assumed array
  n1 = low + high + 1;
  int b[n1];
  while (i <= mid && k <= high) // is low is lesser or equal to mid or mid+1 is lesser or equal to high
  {

    if (sort[i] <= sort[k]) //  elements of left array compared with  elements of right array until the while condition is right.
    {
      /* if elements of left array is lesser than elements of right array then store that elements in a new array.*/
      b[j] = sort[i];
      i++;
    }
    else //if conditions is wrong then it will be executed.
    {
      /* if elements of left array is not lesser than elements of right array then store  elements of right array in a new array.*/
      b[j] = sort[k];
      k++;
    }
    j++;
  }
  if (i > mid) // if i is greater than mid then
  {
    for (r = k; r <= high; r++)
    {
      b[j] = sort[r];
      j++;
    }
  }
  else // if i is lesser than mid or k is greater than high then
  {
    for (r = i; r <= mid; r++)
    {
      b[j] = sort[r];
      j++;
    }
  }
  /* assignments of assumed array into original array */
  for (r = low; r <= high; r++)
  {
    sort[r] = b[r];
  }
}
/* merge sort algorithm */
void Merge_sort(int sort[], int low, int high)
{
  int mid;
  if (low == high)
  {
    return sort[low];
  }
  else
  {
    mid = (low + high) / 2;
    Merge_sort(sort, low, mid);
    Merge_sort(sort, mid + 1, high);
    Merge(sort, low, mid, high);
  }
}
/* displaying sorted array on screen */
void printArray(int array[], int n)
{
  for (int i = 0; i <= n - 1; i++)
  {
    printf("%d\n", array[i]);
  }
}
/* main method */
int main()
{
  int n;
  printf("Enetr how many number you want to arrange:");
  scanf("%d", &n);
  int sort[n];
  int i;
  printf("Start enter data :\n");
  /* taking data in input from the user in array */
  for (i = 0; i <= n - 1; i++)
  {
    scanf("%d", &sort[i]);
  }
  int low, high;
  low = 0;//first index of array 
  high = n - 1;//last index of array 
  Merge_sort(sort, low, high);//mergesort functions call
  printf("Sorted array: \n");
  printArray(sort, n);//printing sorted array 
  return 0;
}
