// Write a program to implement binary search algorithm using iterative method.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int BinarySearch(int [], int, int);

int main() {    
    FILE *fp;
    int arr[10000];
    int n, key;
    clock_t start, end;

    /* ==================== 100 ELEMENTS ==================== */

    n = 100;
    printf("enter the key to search in the array: ");
    scanf("%d", &key);

    // Best Case 100
    fp = fopen("F:\\Study material\\Notes and lab manual\\sem-5 material\\DAA LAB\\LAB-3\\bestcase100.txt", "r");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);

    start = clock();
    int result = BinarySearch(arr, n, key);
    end = clock();

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    printf("Time taken to find the element: %lf seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);

    printf("==================================================================\n");

    /* ==================== 1000 ELEMENTS ==================== */

    n = 1000;

    // Best Case 1000
    fp = fopen("F:\\Study material\\Notes and lab manual\\sem-5 material\\DAA LAB\\LAB-3\\bestcase1000.txt", "r");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);

    start = clock();
    int  result2 = BinarySearch(arr, n, key);
    end = clock();

    if (result2 != -1) {
        printf("Element found at index %d\n", result2);
    } else {
        printf("Element not found\n");
    }

    printf("Time taken to find the element: %lf seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);

    
    printf("==================================================================\n");

    //  ==================== 10000 ELEMENTS ==================== 

    n = 10000;

    // Best Case 10000
    fp = fopen("F:\\Study material\\Notes and lab manual\\sem-5 material\\DAA LAB\\LAB-3\\bestcase10000.txt", "r");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);

    start = clock();
    int result3 = BinarySearch(arr, n, key);
    end = clock();

    if (result3 != -1) {
        printf("Element found at index %d\n", result3);
    } else {
        printf("Element not found\n");
    }

    printf("Time taken to find the element: %lf seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);
   
    return 0;
}


int BinarySearch(int arr[], int n,int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }   
    return -1;
}
    
