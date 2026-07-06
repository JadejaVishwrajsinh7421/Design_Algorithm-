// Write a program to sort array elements using insertion sort. Read n elements given by user from file and observe cpu time taken. 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void selectionSort(int [], int);

int main() {
    FILE *fp;
    int arr[10000];
    int n;
    clock_t start, end;

    /* ==================== 100 ELEMENTS ==================== */

    n = 100;

    // Best Case 100
    fp = fopen("bestcase100.txt", "r");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);

    start = clock();
    selectionSort(arr, n);
    end = clock();

    printf("Time taken to sort best case for 100 elements: %lf seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);

    // Worst Case 100
    fp = fopen("worstcase100.txt", "r");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);

    start = clock();
    selectionSort(arr, n);
    end = clock();

    printf("Time taken to sort worst case for 100 elements: %lf seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);

    // Average Case 100
    fp = fopen("averagecase100.txt", "r");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);

    start = clock();
    selectionSort(arr, n);
    end = clock();

    printf("Time taken to sort average case for 100 elements: %lf seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);


           printf("==================================================================\n");

    /* ==================== 1000 ELEMENTS ==================== */

    n = 1000;

    // Best Case 1000
    fp = fopen("bestcase1000.txt", "r");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);

    start = clock();
    selectionSort(arr, n);
    end = clock();

    printf("Time taken to sort best case for 1000 elements: %lf seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);

    // Worst Case 1000
    fp = fopen("worstcase1000.txt", "r");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);

    start = clock();
    selectionSort(arr, n);
    end = clock();

    printf("Time taken to sort worst case for 1000 elements: %lf seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);

    // Average Case 1000
    fp = fopen("averagecase1000.txt", "r");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);

    start = clock();
    selectionSort(arr, n);
    end = clock();

    printf("Time taken to sort average case for 1000 elements: %lf seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);

    printf("==================================================================\n");

    //  ==================== 10000 ELEMENTS ==================== 

    n = 10000;

    // Best Case 10000
    fp = fopen("bestcase10000.txt", "r");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);

    start = clock();
    selectionSort(arr, n);
    end = clock();


    printf("Time taken to sort best case for 10000 elements: %lf seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);

    // Worst Case 10000
    fp = fopen("worstcase10000.txt", "r");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);

    start = clock();
    selectionSort(arr, n);
    end = clock();


    printf("Time taken to sort worst case for 10000 elements: %lf seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);

    // Average Case 10000
    fp = fopen("averagecase10000.txt", "r");
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);

    start = clock();
    selectionSort(arr, n);
    end = clock();


    printf("Time taken to sort average case for 10000 elements: %lf seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}


void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
    
