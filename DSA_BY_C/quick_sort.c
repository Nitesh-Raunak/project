/* a simple way to quick sort */
#include <stdio.h>
/* partitions method/ functions */
int partition(int sort[], int low, int high)
{
    int pivot = sort[low]; // Taking the first index elements as the pivot
    int left, right;
    left = low;//assigning low value to left variables
    right = high;//assigning high value to right  variables
    
    while (left < right)//left must be less than right or low must be than right
    {
        while (sort[left] <= pivot)//if array of left index is lesser equal to pivot then
        {
            left++;//increment left or low
        }
        while (sort[right] > pivot)//if array of right/high index is greater than pivot then
        {
            right--;//decrement right or high
        }
        if (left < right)//if both the above  condition is false but left must be less than right
        {
            /* swaping of left index elements and right index elements */
            int temp = sort[left];
            sort[left] = sort[right];
            sort[right] = temp;
        }
    }
    /* if left is not less than right  then swap pivot elements and right index elements*/
    sort[low] = sort[right];
    sort[right] = pivot;
    return right;// return right index value to called functions
}
/*quick sort functions */
void quick_sort(int sort[], int low, int high)
{
    int x;
    if (low < high)
    {
        x = partition(sort, low, high);//partitions functions call
        quick_sort(sort, low, x - 1);//quicksort recursive call 
        quick_sort(sort, x + 1, high);//quicksort recursive call
    }
}
/* displaying sorted data */
void sort_array(int sort[], int n)
{
    printf("\n sorted data in array.\n");
    /* printing sorted array loop*/
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d\n", sort[i]);
    }
}
/* main method */
void main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);
    int sort[n];
    int i;
    int high, low;
    low = 0;
    high = n - 1;
    printf("\n start enter data in array to sort.\n");
    /* input elements from the user in array*/
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &sort[i]);
    }
    quick_sort(sort, low, high);//quicksort function call
    sort_array(sort, n);//print method call
}
