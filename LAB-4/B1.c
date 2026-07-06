#include <stdio.h>

// Heapify function
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int temp;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}

// Heap Sort
void heapSort(int arr[], int n)
{
    int i, temp;

    // Build Max Heap
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Sort
    for (i = n - 1; i > 0; i--)
    {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}

int main()
{
    int n, k;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter elements of array A:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter elements of array B:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);
    
    int sum[n * n];
    int index = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            sum[index++] = a[i] + b[j];
        }
    }

    // Sort sums using Heap Sort
    heapSort(sum, index);

    printf("Top %d maximum sums are:\n", k);

    for(int i = index - 1; i >= index - k; i--)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}