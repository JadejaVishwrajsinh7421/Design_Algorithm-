#include <stdio.h>
#include <limits.h>

// Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findMinDifference(int arr[], int n)
{
    bubbleSort(arr, n);

    int min = INT_MAX;

    for(int i = 0; i < n - 1; i++)
    {
        int diff = arr[i + 1] - arr[i];

        if(diff < min)
        {
            min = diff;
        }
    }

    return min;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = findMinDifference(arr, n);

    printf("Minimum Difference = %d\n", result);

    return 0;
}